#pragma once

#include "RE/B/BSTArray.h"
#include "RE/B/BSTHashMap.h"
#include "RE/P/PipboyValue.h"

namespace RE
{
	class PipboyArray :
		public PipboyValue  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::PipboyArray };
		static constexpr auto VTABLE{ VTABLE::PipboyArray };

		// members
		BSTArray<PipboyValue*>  elements;           // 18
		BSTSet<std::uint32_t>   addedElementIDs;    // 30
		BSTArray<std::uint32_t> removedElementIDs;  // 60
		bool                    newlyCreated;       // 78
	};
	static_assert(sizeof(PipboyArray) == 0x80);
}
