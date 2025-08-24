#pragma once

#include "RE/F/FIGHT_REACTION.h"

namespace RE
{
	class GROUP_REACTION
	{
	public:
		// members
		TESForm*       form;           // 00
		std::int32_t   reaction;       // 08
		FIGHT_REACTION fightReaction;  // 0C
	};
	static_assert(sizeof(GROUP_REACTION) == 0x10);
}
