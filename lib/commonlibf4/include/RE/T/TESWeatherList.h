#pragma once

#include "RE/B/BSSimpleList.h"

namespace RE
{
	class WeatherEntry;

	class TESWeatherList :
		public BSSimpleList<WeatherEntry*>
	{
	public:
	};
	static_assert(sizeof(TESWeatherList) == 0x10);
}
