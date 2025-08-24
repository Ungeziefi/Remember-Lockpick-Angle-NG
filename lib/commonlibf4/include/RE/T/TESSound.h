#pragma once

#include "RE/R/RepeaterData.h"
#include "RE/T/TESBoundAnimObject.h"

namespace RE
{
	class __declspec(novtable) TESSound :
		public TESBoundAnimObject  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::TESSound };
		static constexpr auto VTABLE{ VTABLE::TESSound };
		static constexpr auto FORM_ID{ ENUM_FORM_ID::kSOUN };

		// members
		BGSSoundDescriptorForm*    descriptor;  // 68
		TESSoundDefs::RepeaterData repeatData;  // 70
	};
	static_assert(sizeof(TESSound) == 0x80);
}
