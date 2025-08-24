#pragma once

#include "RE/N/NiExtraData.h"
#include "RE/N/NiPoint.h"

namespace RE
{
	class __declspec(novtable) BSBound :
		public NiExtraData  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::BSBound };
		static constexpr auto VTABLE{ VTABLE::BSBound };
		static constexpr auto Ni_RTTI{ Ni_RTTI::BSBound };

		// members
		NiPoint3 center;   // 18
		NiPoint3 extents;  // 24
	};
	static_assert(sizeof(BSBound) == 0x30);
}
