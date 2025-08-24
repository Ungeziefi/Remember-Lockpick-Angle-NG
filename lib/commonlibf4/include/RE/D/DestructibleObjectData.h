#pragma once

#include "RE/B/BGSTypedFormValuePair.h"
#include "RE/B/BSTArray.h"
#include "RE/B/BSTTuple.h"
#include "RE/N/NiPointer.h"

namespace RE
{
	class DestructibleObjectStage;
	class QueuedFile;

	class DestructibleObjectData
	{
	public:
		// members
		std::uint32_t                                                   health;                      // 00
		std::int8_t                                                     numStages;                   // 04
		std::int8_t                                                     flags;                       // 05
		DestructibleObjectStage**                                       stagesArray;                 // 08
		BSTArray<BSTTuple<TESForm*, BGSTypedFormValuePair::SharedVal>>* damageTypes;                 // 10
		volatile std::int32_t                                           replacementModelRefCount;    // 18
		NiPointer<QueuedFile>                                           preloadedReplacementModels;  // 20
	};
	static_assert(sizeof(DestructibleObjectData) == 0x28);
}
