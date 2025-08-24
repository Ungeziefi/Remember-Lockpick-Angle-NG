#pragma once

#include "RE/P/PipboySubMenu.h"

namespace RE
{
	class __declspec(novtable) PipboyPlayerInfoMenu :
		public PipboySubMenu  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::PipboyPlayerInfoMenu };
		static constexpr auto VTABLE{ VTABLE::PipboyPlayerInfoMenu };

		// override (PipboySubMenu)
		void UpdateData() override
		{
			using func_t = decltype(&PipboyPlayerInfoMenu::UpdateData);
			static REL::Relocation<func_t> func{ ID::PipboyPlayerInfoMenu::UpdateData };
			return func(this);
		}
	};
	static_assert(sizeof(PipboyPlayerInfoMenu) == 0x18);
}
