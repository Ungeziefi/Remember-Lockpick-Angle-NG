#pragma once

#include "RE/B/BSTEvent.h"
#include "RE/G/GameMenuBase.h"
#include "RE/P/PipboyInventoryMenu.h"
#include "RE/P/PipboyLogMenu.h"
#include "RE/P/PipboyMapMenu.h"
#include "RE/P/PipboyPerksMenu.h"
#include "RE/P/PipboyPlayerInfoMenu.h"
#include "RE/P/PipboyQuestMenu.h"
#include "RE/P/PipboyRadioMenu.h"
#include "RE/P/PipboySpecialMenu.h"
#include "RE/P/PipboyStatsMenu.h"
#include "RE/P/PipboyWorkshopMenu.h"

namespace RE
{
	class IdleInputEvent;
	class MenuOpenCloseEvent;

	class __declspec(novtable) PipboyMenu :
		public GameMenuBase,                      // 000
		public BSTEventSink<MenuOpenCloseEvent>,  // 0E0
		public BSTEventSink<IdleInputEvent>       // 0E8
	{
	public:
		static constexpr auto RTTI{ RTTI::PipboyMenu };
		static constexpr auto VTABLE{ VTABLE::PipboyMenu };
		static constexpr auto MENU_NAME{ "PipboyMenu"sv };

		void RefreshMapMarkers(std::uint32_t a_markerID)
		{
			using func_t = decltype(&PipboyMenu::RefreshMapMarkers);
			static REL::Relocation<func_t> func{ ID::PipboyMenu::RefreshMapMarkers };
			return func(this, a_markerID);
		}

		// members
		Scaleform::GFx::Value dataObj;                    // 0F0
		PipboyStatsMenu       statsMenuObj;               // 110
		PipboySpecialMenu     specialMenuObj;             // 130
		PipboyPerksMenu       perksMenuObj;               // 148
		PipboyInventoryMenu   inventoryMenuObj;           // 160
		PipboyQuestMenu       questMenuObj;               // 178
		PipboyWorkshopMenu    workshopMenuObj;            // 190
		PipboyLogMenu         logMenuObj;                 // 1A8
		PipboyMapMenu         mapMenuObj;                 // 1C0
		PipboyRadioMenu       radioMenuObj;               // 220
		PipboyPlayerInfoMenu  playerInfoMenuObj;          // 240
		std::int8_t           disableInputCounter;        // 258
		bool                  pipboyCursorEnabled;        // 259
		bool                  showingModalMessage;        // 25A
		bool                  pipboyHiddenByAnotherMenu;  // 25B
		bool                  performFastTravelCheck;     // 25C
	};
	static_assert(sizeof(PipboyMenu) == 0x260);
}
