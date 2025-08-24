#pragma once

#include "RE/B/BSShaderPropertyLightData.h"
#include "RE/B/BSTArray.h"
#include "RE/N/NiNode.h"
#include "RE/N/NiPointer.h"

namespace RE
{
	class BSGeometry;
	class FlattenedGeometryData;

	class __declspec(novtable) BSFadeNode :
		public NiNode  // 000
	{
	public:
		static constexpr auto RTTI{ RTTI::BSFadeNode };
		static constexpr auto VTABLE{ VTABLE::BSFadeNode };
		static constexpr auto Ni_RTTI{ Ni_RTTI::BSFadeNode };

		class FlattenedGeometryData
		{
		public:
			// members
			NiBound               bound;     // 00
			NiPointer<BSGeometry> geometry;  // 10
			std::uint32_t         flags;     // 18
		};
		static_assert(sizeof(FlattenedGeometryData) == 0x20);

		// members
		BSShaderPropertyLightData                                        lightData;               // 140
		BSTArray<FlattenedGeometryData>                                  geomArray;               // 168
		BSTArray<NiBound, BSTAlignedHeapArrayAllocator<0x10>::Allocator> mergedGeomBounds;        // 180
		float                                                            nearDistSqr;             // 198
		float                                                            farDistSqr;              // 19C
		float                                                            currentFade;             // 1A0
		float                                                            currentDecalFade;        // 1A4
		float                                                            boundRadius;             // 1A8
		float                                                            timeSinceUpdate;         // 1AC
		std::int32_t                                                     frameCounter;            // 1B0
		float                                                            previousMaxA;            // 1B4
		float                                                            currentShaderLODLevel;   // 1B8
		float                                                            previousShaderLODLevel;  // 1BC
	};
	static_assert(sizeof(BSFadeNode) == 0x1C0);
}
