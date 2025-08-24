#pragma once

#include "Scaleform/G/GFx_FunctionHandler.h"
#include "Scaleform/G/GFx_Movie.h"
#include "Scaleform/G/GFx_Value.h"

namespace RE
{
	class SWFToCodeFunctionHandler :
		public Scaleform::GFx::FunctionHandler  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::SWFToCodeFunctionHandler };
		static constexpr auto VTABLE{ VTABLE::SWFToCodeFunctionHandler };

		// NOLINTNEXTLINE(modernize-use-override)
		virtual ~SWFToCodeFunctionHandler() = default;  // 00

		// override (Scaleform::GFx::FunctionHandler)
		void Call(const Params&) override { return; }  // 01

		// add
		virtual void MapCodeObjectFunctions() { return; }  // 02

		void MapCodeMethodToASFunction(const char* a_functionName, std::int32_t a_functionID)
		{
			using func_t = decltype(&SWFToCodeFunctionHandler::MapCodeMethodToASFunction);
			static REL::Relocation<func_t> func{ ID::SWFToCodeFunctionHandler::MapCodeMethodToASFunction };
			return func(this, a_functionName, a_functionID);
		}

		void RegisterCodeObject(Scaleform::GFx::Movie& a_movie, Scaleform::GFx::Value& a_menuObj)
		{
			using func_t = decltype(&SWFToCodeFunctionHandler::RegisterCodeObject);
			static REL::Relocation<func_t> func{ ID::SWFToCodeFunctionHandler::RegisterCodeObject };
			return func(this, a_movie, a_menuObj);
		}
	};
	static_assert(sizeof(SWFToCodeFunctionHandler) == 0x10);
}
