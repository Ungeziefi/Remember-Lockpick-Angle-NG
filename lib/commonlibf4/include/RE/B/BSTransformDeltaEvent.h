#pragma once

#include "RE/N/NiMatrix3.h"
#include "RE/N/NiPoint.h"

namespace RE
{
	class BSTransformDeltaEvent
	{
	public:
		// members
		NiMatrix3 deltaRotation;
		NiPoint4  deltaTranslation;
		NiPoint4  previousTranslation;
		NiPoint4  previousRotation;
		NiPoint4  previousScale;
		NiPoint4  currentTranslation;
		NiPoint4  currentRotation;
		NiPoint4  currentScale;
	};
	static_assert(sizeof(BSTransformDeltaEvent) == 0xA0);
}
