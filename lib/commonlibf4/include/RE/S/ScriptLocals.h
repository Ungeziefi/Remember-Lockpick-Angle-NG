#pragma once

#include "RE/B/BSSimpleList.h"

namespace RE
{
	class ACTION_OBJECT;
	class SCRIPT_EFFECT_DATA;
	class SCRIPT_LOCAL;

	class ScriptLocals
	{
	public:
		// members
		Script*                       masterScript;      // 00
		std::int8_t                   flags;             // 08
		BSSimpleList<ACTION_OBJECT*>* actionList;        // 10
		BSSimpleList<SCRIPT_LOCAL*>*  localList;         // 18
		SCRIPT_EFFECT_DATA*           scriptEffectData;  // 20
	};
	static_assert(sizeof(ScriptLocals) == 0x28);
}
