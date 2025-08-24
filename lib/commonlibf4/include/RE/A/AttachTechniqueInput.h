#pragma once

#include "RE/N/NiPointer.h"

namespace RE
{
	class NiAVObject;
	class NiNode;

	namespace BSAttachTechniques
	{
		class __declspec(novtable) AttachTechniqueInput
		{
		public:
			static constexpr auto RTTI{ RTTI::BSAttachTechniques__AttachTechniqueInput };
			static constexpr auto VTABLE{ VTABLE::BSAttachTechniques__AttachTechniqueInput };

			virtual ~AttachTechniqueInput();  // 00

			// add
			virtual void Clear();  // 01

			// members
			NiPointer<NiNode>     root;         // 08
			NiPointer<NiAVObject> attaching;    // 10
			std::uint32_t         attachPoint;  // 18
		};
		static_assert(sizeof(AttachTechniqueInput) == 0x20);
	}
}
