#include "RE/B/BSScript_TypeInfo.h"

#include "RE/B/BSScript_IComplexType.h"

namespace RE::BSScript
{
	auto TypeInfo::GetRawType() const
		-> RawType
	{
		if (IsComplex()) {
			const auto complex =
				reinterpret_cast<IComplexType*>(
					reinterpret_cast<std::uintptr_t>(data.complexTypeInfo) &
					~static_cast<std::uintptr_t>(1));
			uint32_t rtype = (uint32_t)complex->GetRawType();
			if (IsArray()) {
				rtype += 10;
			}
			return (RawType)rtype;
		} else {
			return *data.rawType;
		}
	}

	IComplexType* TypeInfo::GetComplexType() const
	{
		return IsComplex() ? reinterpret_cast<IComplexType*>(
								 reinterpret_cast<std::uintptr_t>(data.complexTypeInfo) &
								 ~static_cast<std::uintptr_t>(1)) :
		                     nullptr;
	}

	ObjectTypeInfo* TypeInfo::GetObjectTypeInfo() const
	{
		return IsObject() || IsObjectArray() ? reinterpret_cast<ObjectTypeInfo*>(GetComplexType()) : nullptr;
	}

	StructTypeInfo* TypeInfo::GetStructTypeInfo() const
	{
		return IsStruct() || IsStructArray() ? reinterpret_cast<StructTypeInfo*>(GetComplexType()) : nullptr;
	}
}
