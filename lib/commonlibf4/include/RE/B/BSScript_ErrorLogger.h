#pragma once

#include "RE/B/BSFixedString.h"
#include "RE/B/BSSpinLock.h"
#include "RE/B/BSTEvent.h"
#include "RE/B/BSTHashMap.h"

namespace RE
{
	namespace BSScript
	{
		class ICachedErrorMessage;
		class LogEvent;

		class __declspec(novtable) ErrorLogger :
			public BSTEventSource<LogEvent>  // 08
		{
		public:
			static constexpr auto RTTI{ RTTI::BSScript__ErrorLogger };
			static constexpr auto VTABLE{ VTABLE::BSScript__ErrorLogger };

			enum class Severity
			{
				kInfo = 0x0,
				kWarning = 0x1,
				kError = 0x2,
				kFatal = 0x3
			};

			class PerThreadErrorCounts
			{
			public:
				// members
				std::uint32_t fatalCount;    // 0
				std::uint32_t errorCount;    // 4
				std::uint32_t warningCount;  // 8
			};
			static_assert(sizeof(PerThreadErrorCounts) == 0xC);

			virtual ~ErrorLogger();  // 00

			// add
			virtual void PostErrorImpl(const ICachedErrorMessage* a_errMsg, Severity a_severity) = 0;  // 01
			virtual void ResetImpl() { return; }                                                       // 02

			// members
			const BSFixedString                             logName;       // 60
			BSSpinLock                                      dataLock;      // 68
			BSTHashMap<std::uint32_t, PerThreadErrorCounts> threadErrors;  // 70
		};
		static_assert(sizeof(ErrorLogger) == 0xA0);
	}
}
