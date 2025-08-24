#pragma once

#include "RE/B/BSTEvent.h"
#include "RE/N/NiPointer.h"

namespace RE
{
	class TESActivateEvent
	{
	public:
		[[nodiscard]] static BSTEventSource<TESActivateEvent>* GetEventSource()
		{
			using func_t = decltype(&TESActivateEvent::GetEventSource);
			static REL::Relocation<func_t> func{ ID::TESActivateEvent::GetEventSource };
			return func();
		}

		// members
		NiPointer<TESObjectREFR> objectActivated;  // 00
		NiPointer<TESObjectREFR> actionRef;        // 08
	};
	static_assert(sizeof(TESActivateEvent) == 0x10);
}
