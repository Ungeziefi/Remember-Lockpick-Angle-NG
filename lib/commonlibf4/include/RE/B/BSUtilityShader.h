#pragma once

#include "RE/B/BSShader.h"

namespace RE
{
	class __declspec(novtable) BSUtilityShader :
		public BSShader  // 000
	{
	public:
		static constexpr auto RTTI{ RTTI::BSUtilityShader };
		static constexpr auto VTABLE{ VTABLE::BSUtilityShader };

		// members
		std::uint32_t currentTechniqueID;  // 118
		std::uint32_t currentDecl;         // 11C
	};
	static_assert(sizeof(BSUtilityShader) == 0x120);
}
