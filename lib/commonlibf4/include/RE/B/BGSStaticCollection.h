#pragma once

#include "RE/B/BGSModelMaterialSwap.h"
#include "RE/B/BSSimpleList.h"
#include "RE/B/BSTHashMap.h"
#include "RE/N/NiPoint.h"
#include "RE/T/TESBoundObject.h"

namespace RE
{
	class __declspec(novtable) BGSStaticCollection :
		public TESBoundObject,       // 00
		public BGSModelMaterialSwap  // 68
	{
	public:
		static constexpr auto RTTI{ RTTI::BGSStaticCollection };
		static constexpr auto VTABLE{ VTABLE::BGSStaticCollection };
		static constexpr auto FORM_ID{ ENUM_FORM_ID::kSCOL };

		class REF_COL_DATA
		{
		public:
			// members
			NiPoint3 location;  // 00
			NiPoint3 angle;     // 0C
			float    scale;     // 18
		};
		static_assert(sizeof(REF_COL_DATA) == 0x1C);

		// members
		BSTHashMap<TESBoundObject*, BSSimpleList<BGSStaticCollection::REF_COL_DATA>*>* dataMap;  // A8
	};
	static_assert(sizeof(BGSStaticCollection) == 0xB0);
}
