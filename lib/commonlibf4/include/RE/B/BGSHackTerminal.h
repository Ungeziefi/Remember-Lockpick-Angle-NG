#pragma once

#include "RE/B/BSPointerHandle.h"
#include "RE/T/TESObjectREFR.h"

namespace RE
{
	class BGSHackTerminal
	{
	public:
		BGSHackTerminal(TESObjectREFR* a_terminal, std::uint32_t a_success) :
			success(a_success)
		{
			if (a_terminal) {
				terminal = a_terminal->GetHandle();
			}
		}

		[[nodiscard]] static std::uint32_t EVENT_INDEX()
		{
			static REL::Relocation<std::uint32_t*> eventIdx{ ID::BGSHackTerminal::EventIndex };
			return *eventIdx;
		}

		// members
		ObjectRefHandle terminal;  // 00
		std::uint32_t   success;   // 04
	};
	static_assert(sizeof(BGSHackTerminal) == 0x08);
}
