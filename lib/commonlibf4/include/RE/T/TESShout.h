#pragma once

#include "RE/B/BGSEquipType.h"
#include "RE/B/BGSMenuDisplayObject.h"
#include "RE/T/TESDescription.h"
#include "RE/T/TESForm.h"
#include "RE/T/TESFullName.h"

namespace RE
{
	class __declspec(novtable) TESShout :
		public TESForm,               // 00
		public TESFullName,           // 20
		public BGSMenuDisplayObject,  // 30
		public BGSEquipType,          // 40
		public TESDescription         // 50
	{
	public:
		static constexpr auto RTTI{ RTTI::TESShout };
		static constexpr auto VTABLE{ VTABLE::TESShout };
		static constexpr auto FORM_ID{ ENUM_FORM_ID::kSHOU };

		class Variation
		{
		public:
			// members
			TESWordOfPower* word;          // 00
			SpellItem*      spell;         // 08
			float           recoveryTime;  // 10
		};
		static_assert(sizeof(Variation) == 0x18);

		// members
		Variation variations[3];  // 68
	};
	static_assert(sizeof(TESShout) == 0xB0);
}
