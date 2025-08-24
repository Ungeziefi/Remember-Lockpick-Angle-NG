#pragma once

#include "RE/B/BSFixedString.h"

namespace RE
{
	namespace Movement
	{
		class MaxSpeeds
		{
		public:
			// members
			float speeds[7][4];  // 00
		};
		static_assert(sizeof(MaxSpeeds) == 0x70);

		class TypeData
		{
		public:
			// members
			BSFixedString typeName;         // 00
			MaxSpeeds     defaultData;      // 08
			float         floatHeight;      // 78
			float         flightAngleGain;  // 7C
		};
		static_assert(sizeof(TypeData) == 0x80);
	}
}
