#pragma once

#include "RE/B/BGSObjectInstance.h"
#include "RE/B/BSModelDB.h"
#include "RE/B/BSTSmartPointer.h"
#include "RE/N/NiPointer.h"

namespace RE
{
	class BGSObjectInstanceExtra;
	class BGSTextureSet;
	class NiAVObject;
	class ModelReferenceEffect;
	class TESModel;
	class WeaponAnimationGraphManagerHolder;

	class BIPOBJECT
	{
	public:
		// members
		BGSObjectInstance                                  parent;              // 00
		BGSObjectInstanceExtra*                            modExtra;            // 10
		TESObjectARMA*                                     armorAddon;          // 18
		TESModel*                                          part;                // 20
		BGSTextureSet*                                     skinTexture;         // 28
		NiPointer<NiAVObject>                              partClone;           // 30
		BSModelDB::HandelListHead                          handleList;          // 38
		BSTSmartPointer<WeaponAnimationGraphManagerHolder> objectGraphManager;  // 40
		NiPointer<ModelReferenceEffect>                    hitEffect;           // 48
		bool                                               skinned;             // 50

	private:
		void dtor()
		{
			using func_t = decltype(&BIPOBJECT::dtor);
			static REL::Relocation<func_t> func{ ID::BIPOBJECT::dtor };
			return func(this);
		}
	};
	static_assert(sizeof(BIPOBJECT) == 0x58);
}
