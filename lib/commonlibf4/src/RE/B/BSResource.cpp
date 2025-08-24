#include "RE/B/BSResource.h"

namespace RE::BSResource
{
	ErrorCode GetOrCreateStream(const char* a_fileName, BSTSmartPointer<Stream>& a_result, bool a_writable, Location* a_optionalStart)
	{
		using func_t = decltype(&GetOrCreateStream);
		static REL::Relocation<func_t> func{ ID::BSResource::GetOrCreateStream };
		return func(a_fileName, a_result, a_writable, a_optionalStart);
	}
}
