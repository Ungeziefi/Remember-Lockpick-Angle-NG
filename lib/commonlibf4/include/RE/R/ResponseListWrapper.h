#pragma once

namespace RE
{
	class TESResponse;

	class ResponseListWrapper
	{
	public:
		// members
		TESResponse* head;  // 0
	};
	static_assert(sizeof(ResponseListWrapper) == 0x8);
}
