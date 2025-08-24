#pragma once

#include "RE/B/BSTArray.h"
#include "RE/B/BSTSingleton.h"

namespace RE
{
	class BSNavmeshInfo;

	class __declspec(novtable) BSNavmeshInfoMap :
		public BSTSingletonExplicit<BSNavmeshInfoMap>  // 0
	{
	public:
		static constexpr auto RTTI{ RTTI::BSNavmeshInfoMap };
		static constexpr auto VTABLE{ VTABLE::BSNavmeshInfoMap };

		class IVisitor;

		virtual ~BSNavmeshInfoMap();  // 00

		// add
		virtual BSNavmeshInfo* GetNavMeshInfoFixID(std::uint32_t a_navMeshID) = 0;                                                          // 01
		virtual BSNavmeshInfo* GetNavmeshInfo(std::uint32_t a_navMeshID) = 0;                                                               // 02
		virtual void           GetAllNavMeshInfo(BSTArray<BSNavmeshInfo*>* a_returnArray) = 0;                                              // 03
		virtual void           BuildListOfConnectedInfos(const BSNavmeshInfo* a_navMeshInfo, BSTArray<BSNavmeshInfo*>* a_returnArray) = 0;  // 04
		virtual void           ForEach(IVisitor& a_visitor) = 0;                                                                            // 05
	};
	static_assert(sizeof(BSNavmeshInfoMap) == 0x8);
}
