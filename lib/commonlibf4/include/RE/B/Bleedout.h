#pragma once

namespace RE
{
	namespace Bleedout
	{
		class Event
		{
		public:
			// members
			Actor* actorBleedingOut;  // 00
		};
		static_assert(sizeof(Event) == 0x8);
	}
}
