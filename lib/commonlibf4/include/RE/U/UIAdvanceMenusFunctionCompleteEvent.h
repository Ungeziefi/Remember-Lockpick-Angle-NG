#pragma once

#include "RE/B/BSTEvent.h"

namespace RE
{
	class UIAdvanceMenusFunctionCompleteEvent
	{
	private:
		using EventSource_t = BSTGlobalEvent::EventSource<UIAdvanceMenusFunctionCompleteEvent>;

	public:
		[[nodiscard]] static EventSource_t* GetEventSource()
		{
			static REL::Relocation<EventSource_t**> singleton{ ID::UIAdvanceMenusFunctionCompleteEvent::GetEventSource };
			if (!*singleton) {
				*singleton = new EventSource_t(&BSTGlobalEvent::GetSingleton()->eventSourceSDMKiller);
			}
			return *singleton;
		}
	};
	static_assert(std::is_empty_v<UIAdvanceMenusFunctionCompleteEvent>);
}
