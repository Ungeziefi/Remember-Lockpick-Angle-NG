#pragma once

namespace RE
{
	namespace PlayerDifficultySettingChanged
	{
		class Event
		{
		public:
			// members
			std::uint32_t oldDifficulty;  // 00
			std::uint32_t newDifficulty;  // 04
		};
		static_assert(sizeof(Event) == 0x8);
	}
}
