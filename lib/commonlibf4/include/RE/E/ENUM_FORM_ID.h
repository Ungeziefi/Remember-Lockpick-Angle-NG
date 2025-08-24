#pragma once

namespace RE
{
	enum class ENUM_FORM_ID : std::int32_t
	{
		kNONE,  // 00 NONE X TESForm
		//         X TESObject
		//         X TESBoundObject
		//         X MagicItem
		//         X TESBoundAnimObject
		//         X TESActorBase
		//         X BGSStoryManagerTreeForm
		//         X BGSStoryManagerNodeBase
		kTES4,  // 01 TES4
		kGRUP,  // 02 GRUP
		kGMST,  // 03 GMST
		kKYWD,  // 04 KYWD X BGSKeyword
		kLCRT,  // 05 LCRT X BGSLocationRefType
		kAACT,  // 06 AACT X BGSAction
		kTRNS,  // 07 TRNS X BGSTransform
		kCMPO,  // 08 CMPO X BGSComponent
		kTXST,  // 09 TXST X BGSTextureSet
		kMICN,  // 0A MICN X BGSMenuIcon
		kGLOB,  // 0B GLOB X TESGlobal
		kDMGT,  // 0C DMGT X BGSDamageType
		kCLAS,  // 0D CLAS X TESClass
		kFACT,  // 0E FACT X TESFaction
		kHDPT,  // 0F HDPT X BGSHeadPart
		kEYES,  // 10 EYES X TESEyes
		kRACE,  // 11 RACE X TESRace
		kSOUN,  // 12 SOUN X TESSound
		kASPC,  // 13 ASPC X BGSAcousticSpace
		kSKIL,  // 14 SKIL
		kMGEF,  // 15 MGEF X EffectSetting
		kSCPT,  // 16 SCPT X Script
		kLTEX,  // 17 LTEX X TESLandTexture
		kENCH,  // 18 ENCH X EnchantmentItem
		kSPEL,  // 19 SPEL X SpellItem
		kSCRL,  // 1A SCRL X ScrollItem
		kACTI,  // 1B ACTI X TESObjectACTI
		kTACT,  // 1C TACT X BGSTalkingActivator
		kARMO,  // 1D ARMO X TESObjectARMO
		kBOOK,  // 1E BOOK X TESObjectBOOK
		kCONT,  // 1F CONT X TESObjectCONT
		kDOOR,  // 20 DOOR X TESObjectDOOR
		kINGR,  // 21 INGR X IngredientItem
		kLIGH,  // 22 LIGH X TESObjectLIGH
		kMISC,  // 23 MISC X TESObjectMISC
		kSTAT,  // 24 STAT X TESObjectSTAT
		kSCOL,  // 25 SCOL X BGSStaticCollection
		kMSTT,  // 26 MSTT X BGSMovableStatic
		kGRAS,  // 27 GRAS X TESGrass
		kTREE,  // 28 TREE X TESObjectTREE
		kFLOR,  // 29 FLOR X TESFlora
		kFURN,  // 2A FURN X TESFurniture
		kWEAP,  // 2B WEAP X TESObjectWEAP
		kAMMO,  // 2C AMMO X TESAmmo
		kNPC_,  // 2D NPC_ X TESNPC
		kLVLN,  // 2E LVLN X TESLevCharacter
		kKEYM,  // 2F KEYM X TESKey
		kALCH,  // 30 ALCH X AlchemyItem
		kIDLM,  // 31 IDLM X BGSIdleMarker
		kNOTE,  // 32 NOTE X BGSNote
		kPROJ,  // 33 PROJ X BGSProjectile
		kHAZD,  // 34 HAZD X BGSHazard
		kBNDS,  // 35 BNDS X BGSBendableSpline
		kSLGM,  // 36 SLGM X TESSoulGem
		kTERM,  // 37 TERM X BGSTerminal
		kLVLI,  // 38 LVLI X TESLevItem
		kWTHR,  // 39 WTHR X TESWeather
		kCLMT,  // 3A CLMT X TESClimate
		kSPGD,  // 3B SPGD X BGSShaderParticleGeometryData
		kRFCT,  // 3C RFCT X BGSReferenceEffect
		kREGN,  // 3D REGN X TESRegion
		kNAVI,  // 3E NAVI X NavMeshInfoMap
		kCELL,  // 3F CELL X TESObjectCELL
		kREFR,  // 40 REFR X TESObjectREFR
		//         X Explosion
		//         X Projectile
		kACHR,  // 41 ACHR X Actor
		//         X PlayerCharacter
		kPMIS,  // 42 PMIS X MissileProjectile
		kPARW,  // 43 PARW X ArrowProjectile
		kPGRE,  // 44 PGRE X GrenadeProjectile
		kPBEA,  // 45 PBEA X BeamProjectile
		kPFLA,  // 46 PFLA X FlameProjectile
		kPCON,  // 47 PCON X ConeProjectile
		kPBAR,  // 48 PBAR X BarrierProjectile
		kPHZD,  // 49 PHZD X Hazard
		kWRLD,  // 4A WRLD X TESWorldSpace
		kLAND,  // 4B LAND X TESObjectLAND
		kNAVM,  // 4C NAVM X NavMesh
		kTLOD,  // 4D TLOD
		kDIAL,  // 4E DIAL X TESTopic
		kINFO,  // 4F INFO X TESTopicInfo
		kQUST,  // 50 QUST X TESQuest
		kIDLE,  // 51 IDLE X TESIdleForm
		kPACK,  // 52 PACK X TESPackage
		//         X AlarmPackage
		//         X DialoguePackage
		//         X FleePackage
		//         X SpectatorPackage
		//         X TrespassPackage
		kCSTY,  // 53 CSTY X TESCombatStyle
		kLSCR,  // 54 LSCR X TESLoadScreen
		kLVSP,  // 55 LVSP X TESLevSpell
		kANIO,  // 56 ANIO X TESObjectANIO
		kWATR,  // 57 WATR X TESWaterForm
		kEFSH,  // 58 EFSH X TESEffectShader
		kTOFT,  // 59 TOFT
		kEXPL,  // 5A EXPL X BGSExplosion
		kDEBR,  // 5B DEBR X BGSDebris
		kIMGS,  // 5C IMGS X TESImageSpace
		kIMAD,  // 5D IMAD X TESImageSpaceModifier
		kFLST,  // 5E FLST X BGSListForm
		kPERK,  // 5F PERK X BGSPerk
		kBPTD,  // 60 BPTD X BGSBodyPartData
		kADDN,  // 61 ADDN X BGSAddonNode
		kAVIF,  // 62 AVIF X ActorValueInfo
		kCAMS,  // 63 CAMS X BGSCameraShot
		kCPTH,  // 64 CPTH X BGSCameraPath
		kVTYP,  // 65 VTYP X BGSVoiceType
		kMATT,  // 66 MATT X BGSMaterialType
		kIPCT,  // 67 IPCT X BGSImpactData
		kIPDS,  // 68 IPDS X BGSImpactDataSet
		kARMA,  // 69 ARMA X TESObjectARMA
		kECZN,  // 6A ECZN X BGSEncounterZone
		kLCTN,  // 6B LCTN X BGSLocation
		kMESG,  // 6C MESG X BGSMessage
		kRGDL,  // 6D RGDL
		kDOBJ,  // 6E DOBJ X BGSDefaultObjectManager
		kDFOB,  // 6F DFOB X BGSDefaultObject
		kLGTM,  // 70 LGTM X BGSLightingTemplate
		kMUSC,  // 71 MUSC X BGSMusicType
		kFSTP,  // 72 FSTP X BGSFootstep
		kFSTS,  // 73 FSTS X BGSFootstepSet
		kSMBN,  // 74 SMBN X BGSStoryManagerBranchNode
		kSMQN,  // 75 SMQN X BGSStoryManagerQuestNode
		kSMEN,  // 76 SMEN X BGSStoryManagerEventNode
		kDLBR,  // 77 DLBR X BGSDialogueBranch
		kMUST,  // 78 MUST X BGSMusicTrackFormWrapper
		kDLVW,  // 79 DLVW
		kWOOP,  // 7A WOOP X TESWordOfPower
		kSHOU,  // 7B SHOU X TESShout
		kEQUP,  // 7C EQUP X BGSEquipSlot
		kRELA,  // 7D RELA X BGSRelationship
		kSCEN,  // 7E SCEN X BGSScene
		kASTP,  // 7F ASTP X BGSAssociationType
		kOTFT,  // 80 OTFT X BGSOutfit
		kARTO,  // 81 ARTO X BGSArtObject
		kMATO,  // 82 MATO X BGSMaterialObject
		kMOVT,  // 83 MOVT X BGSMovementType
		kSNDR,  // 84 SNDR X BGSSoundDescriptorForm
		kDUAL,  // 85 DUAL X BGSDualCastData
		kSNCT,  // 86 SNCT X BGSSoundCategory
		kSOPM,  // 87 SOPM X BGSSoundOutput
		kCOLL,  // 88 COLL X BGSCollisionLayer
		kCLFM,  // 89 CLFM X BGSColorForm
		kREVB,  // 8A REVB X BGSReverbParameters
		kPKIN,  // 8B PKIN X BGSPackIn
		kRFGP,  // 8C RFGP
		kAMDL,  // 8D AMDL X BGSAimModel
		kLAYR,  // 8E LAYR
		kCOBJ,  // 8F COBJ X BGSConstructibleObject
		kOMOD,  // 90 OMOD X BGSMod::Attachment::Mod
		kMSWP,  // 91 MSWP X BGSMaterialSwap
		kZOOM,  // 92 ZOOM X BGSZoomData
		kINNR,  // 93 INNR X BGSInstanceNamingRules
		kKSSM,  // 94 KSSM X BGSSoundKeywordMapping
		kAECH,  // 95 AECH X BGSAudioEffectChain
		kSCCO,  // 96 SCCO
		kAORU,  // 97 AORU X BGSAttractionRule
		kSCSN,  // 98 SCSN X BGSSoundCategorySnapshot
		kSTAG,  // 99 STAG X BGSSoundTagSet
		kNOCM,  // 9A NOCM
		kLENS,  // 9B LENS X BGSLensFlare
		kLSPR,  // 9C LSPR
		kGDRY,  // 9D GDRY X BGSGodRays
		kOVIS,  // 9E OVIS

		kTotal,
		kActiveEffect = 163
	};
}
