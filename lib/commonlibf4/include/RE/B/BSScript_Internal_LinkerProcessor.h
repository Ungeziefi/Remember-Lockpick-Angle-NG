#pragma once

#include "RE/B/BSFixedString.h"
#include "RE/B/BSScript_IObjectProcessor.h"
#include "RE/B/BSTArray.h"
#include "RE/B/BSTHashMap.h"
#include "RE/B/BSTSmartPointer.h"

namespace RE
{
	namespace BSScript
	{
		class ErrorLogger;
		class ObjectTypeInfo;
		class StructTypeInfo;

		namespace Internal
		{
			class VirtualMachine;
		}

		class __declspec(novtable) LinkerProcessor :
			public IObjectProcessor
		{
		public:
			static constexpr auto RTTI{ RTTI::BSScript__LinkerProcessor };
			static constexpr auto VTABLE{ VTABLE::BSScript__LinkerProcessor };

			virtual ~LinkerProcessor();  // 00

			// override (IObjectProcessor)
			virtual IObjectProcessor* Clone() override;                                    // 01
			virtual void              SetLoader(ILoader* a_loader) override;               // 02
			virtual bool              Process(const BSFixedString& a_className) override;  // 03

			// members
			Internal::VirtualMachine*   virtualMachine;      // 08
			ErrorLogger*                errorLogger;         // 10
			ILoader*                    loader;              // 18
			std::uint64_t               unk20;               // 20
			bool                        forceReload;         // 28
			BSScrapArray<BSFixedString> loadedParents;       // 30
			BSScrapArray<BSFixedString> objectsToTypecheck;  // 50
			BSScrapArray<BSFixedString> processQueue;        // 70

			BSTHashMap<BSFixedString, BSTSmartPointer<ObjectTypeInfo>>* objectTypeInfoMap;  // 90
			BSTHashMap<BSFixedString, BSTSmartPointer<StructTypeInfo>>* structTypeInfoMap;  // 98
		};
		static_assert(sizeof(LinkerProcessor) == 0xA0);
	}
}
