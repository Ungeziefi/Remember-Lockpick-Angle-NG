#pragma once

namespace RE
{
	enum class POWER_ARMOR_HUD_VISIBILITY_RULE : std::int32_t
	{
		kIgnoresPAHUDVisibility = 0x0,
		kOnlyWithPAHUDVisible = 0x1,
		kOnlyWithPAHUDNotVisible = 0x2
	};
}
