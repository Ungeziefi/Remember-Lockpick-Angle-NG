#pragma once

#include "RE/B/BSPointerHandle.h"

namespace RE
{
	class CommandedActorData
	{
	public:
		// members
		ActorHandle   commandedActor;  // 00
		ActiveEffect* activeEffect;    // 08
	};
	static_assert(sizeof(CommandedActorData) == 0x10);
}
