#pragma once

#include "RE/B/BSResource_Archive2_Index.h"

namespace RE::BSResource::SDirectory2
{
	class Cursor :
		public Archive2::Index::CursorWithEntry  // 000
	{
	public:
		// members
		Archive2::Index* index;  // 170
	};
	static_assert(sizeof(Cursor) == 0x178);
}
