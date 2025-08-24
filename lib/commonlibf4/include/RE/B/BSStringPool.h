#pragma once

namespace RE
{
	class BSStringPool
	{
	public:
		class Entry
		{
		public:
			enum : std::uint16_t
			{
				kShallow = 1 << 14,
				kWide = 1 << 15,
				kRefCountMask = 0x3FFF
			};

			static void release(Entry*& a_entry)
			{
				using func_t = decltype(&Entry::release);
				static REL::Relocation<func_t> func{ ID::BSStringPool::Entry::Release };
				return func(a_entry);
			}

			void acquire()
			{
				REX::TAtomicRef flags{ _flags };
				std::uint16_t   expected{ 0 };
				do {
					expected = flags;
					if ((expected & kRefCountMask) >= kRefCountMask) {
						break;
					}
				} while (!flags.compare_exchange_weak(expected, static_cast<std::uint16_t>(expected + 1)));
			}

			[[nodiscard]] std::uint16_t crc() const noexcept { return _crc; }

			template <class T>
			[[nodiscard]] const T* data() const noexcept;

			template <>
			[[nodiscard]] const char* data<char>() const noexcept
			{
				return u8();
			}

			template <>
			[[nodiscard]] const wchar_t* data<wchar_t>() const noexcept
			{
				return u16();
			}

			[[nodiscard]] const Entry* leaf() const noexcept
			{
				auto iter = this;
				while (iter && iter->shallow()) {
					iter = iter->_right;
				}
				return iter;
			}

			[[nodiscard]] std::uint32_t length() const noexcept
			{
				const auto entry = leaf();
				return entry ? entry->_length : 0;
			}

			[[nodiscard]] bool          shallow() const noexcept { return _flags & kShallow; }
			[[nodiscard]] std::uint32_t size() const noexcept { return length(); }

			[[nodiscard]] const char* u8() const noexcept
			{
				const auto entry = leaf();
				if (entry) {
					assert(!entry->wide());
					return reinterpret_cast<const char*>(entry + 1);
				} else {
					return nullptr;
				}
			}

			[[nodiscard]] const wchar_t* u16() const noexcept
			{
				const auto entry = leaf();
				if (entry) {
					assert(entry->wide());
					return reinterpret_cast<const wchar_t*>(entry + 1);
				} else {
					return nullptr;
				}
			}

			[[nodiscard]] bool wide() const noexcept { return _flags & kWide; }

			// members
			Entry*                 _left;   // 00
			std::uint16_t          _flags;  // 08
			volatile std::uint16_t _crc;    // 08
			union
			{
				std::uint32_t _length;
				Entry*        _right;
			};  // 10
		};
		static_assert(sizeof(Entry) == 0x18);
	};
	static_assert(std::is_empty_v<BSStringPool>);

	template <class T>
	void GetEntry(BSStringPool::Entry*& a_result, const T* a_string, bool a_caseSensitive);

	template <>
	inline void GetEntry<char>(BSStringPool::Entry*& a_result, const char* a_string, bool a_caseSensitive)
	{
		using func_t = decltype(&GetEntry<char>);
		static REL::Relocation<func_t> func{ ID::BSStringPool::GetEntry_char };
		return func(a_result, a_string, a_caseSensitive);
	}

	template <>
	inline void GetEntry<wchar_t>(BSStringPool::Entry*& a_result, const wchar_t* a_string, bool a_caseSensitive)
	{
		using func_t = decltype(&GetEntry<wchar_t>);
		static REL::Relocation<func_t> func{ ID::BSStringPool::GetEntry_wchar };
		return func(a_result, a_string, a_caseSensitive);
	}
}
