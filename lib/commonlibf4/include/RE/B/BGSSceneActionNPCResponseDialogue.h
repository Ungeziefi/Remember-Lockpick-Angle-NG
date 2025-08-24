#pragma once

#include "RE/B/BGSSceneActionConversationBase.h"

namespace RE
{
	class __declspec(novtable) BGSSceneActionNPCResponseDialogue :
		public BGSSceneActionConversationBase
	{
	public:
		static constexpr auto RTTI{ RTTI::BGSSceneActionNPCResponseDialogue };
		static constexpr auto VTABLE{ VTABLE::BGSSceneActionNPCResponseDialogue };

		TESTopicInfo* GetCurrentTopicInfo(BGSScene* a_parentScene)
		{
			using func_t = decltype(&BGSSceneActionNPCResponseDialogue::GetCurrentTopicInfo);
			static REL::Relocation<func_t> func{ ID::BGSSceneActionNPCResponseDialogue::GetCurrentTopicInfo };
			return func(this, a_parentScene);
		}
	};
	static_assert(sizeof(BGSSceneActionNPCResponseDialogue) == 0x90);
}
