#pragma once

#include "RE/I/ImageSpaceModData.h"
#include "RE/I/ImageSpaceModifierInstanceTemp.h"

namespace RE
{
	class ImageSpaceModifierInstanceRB :
		public ImageSpaceModifierInstanceTemp
	{
	public:
		static constexpr auto RTTI{ RTTI::ImageSpaceModifierInstanceRB };
		static constexpr auto VTABLE{ VTABLE::ImageSpaceModifierInstanceRB };

		virtual ~ImageSpaceModifierInstanceRB();  // 00

		// override (ImageSpaceModifierInstanceTemp)
		virtual void Apply() override;                    // 29
		virtual void PrintInfo(char* a_buffer) override;  // 2A

		// members
		ImageSpaceModData data;  // 30
	};
	static_assert(sizeof(ImageSpaceModifierInstanceRB) == 0x80);
}
