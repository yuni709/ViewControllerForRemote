// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ViewControllerForRemote/Public/JoyCameraManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeJoyCameraManager() {}
// Cross Module References
	VIEWCONTROLLERFORREMOTE_API UClass* Z_Construct_UClass_AJoyCameraManager_NoRegister();
	VIEWCONTROLLERFORREMOTE_API UClass* Z_Construct_UClass_AJoyCameraManager();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_ViewControllerForRemote();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
// End Cross Module References
	void AJoyCameraManager::StaticRegisterNativesAJoyCameraManager()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AJoyCameraManager);
	UClass* Z_Construct_UClass_AJoyCameraManager_NoRegister()
	{
		return AJoyCameraManager::StaticClass();
	}
	struct Z_Construct_UClass_AJoyCameraManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_isUseJoyCamera_MetaData[];
#endif
		static void NewProp_isUseJoyCamera_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_isUseJoyCamera;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_isDebugMode_MetaData[];
#endif
		static void NewProp_isDebugMode_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_isDebugMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_isShowUI_MetaData[];
#endif
		static void NewProp_isShowUI_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_isShowUI;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AcceptableRange_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AcceptableRange;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AngleTurnrate_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AngleTurnrate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CenterPos_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CenterPos;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CursorPos_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CursorPos;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CursorUIClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_CursorUIClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CircleUIClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_CircleUIClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CursorUIInstance_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CursorUIInstance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CircleUIInstance_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CircleUIInstance;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AJoyCameraManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_ViewControllerForRemote,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AJoyCameraManager_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "JoyCameraManager.h" },
		{ "ModuleRelativePath", "Public/JoyCameraManager.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AJoyCameraManager_Statics::NewProp_isUseJoyCamera_MetaData[] = {
		{ "Category", "JoyCamera" },
		{ "Comment", "// Properties\n" },
		{ "ModuleRelativePath", "Public/JoyCameraManager.h" },
		{ "ToolTip", "Properties" },
	};
#endif
	void Z_Construct_UClass_AJoyCameraManager_Statics::NewProp_isUseJoyCamera_SetBit(void* Obj)
	{
		((AJoyCameraManager*)Obj)->isUseJoyCamera = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AJoyCameraManager_Statics::NewProp_isUseJoyCamera = { "isUseJoyCamera", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AJoyCameraManager), &Z_Construct_UClass_AJoyCameraManager_Statics::NewProp_isUseJoyCamera_SetBit, METADATA_PARAMS(Z_Construct_UClass_AJoyCameraManager_Statics::NewProp_isUseJoyCamera_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AJoyCameraManager_Statics::NewProp_isUseJoyCamera_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AJoyCameraManager_Statics::NewProp_isDebugMode_MetaData[] = {
		{ "Category", "JoyCamera" },
		{ "ModuleRelativePath", "Public/JoyCameraManager.h" },
	};
#endif
	void Z_Construct_UClass_AJoyCameraManager_Statics::NewProp_isDebugMode_SetBit(void* Obj)
	{
		((AJoyCameraManager*)Obj)->isDebugMode = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AJoyCameraManager_Statics::NewProp_isDebugMode = { "isDebugMode", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AJoyCameraManager), &Z_Construct_UClass_AJoyCameraManager_Statics::NewProp_isDebugMode_SetBit, METADATA_PARAMS(Z_Construct_UClass_AJoyCameraManager_Statics::NewProp_isDebugMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AJoyCameraManager_Statics::NewProp_isDebugMode_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AJoyCameraManager_Statics::NewProp_isShowUI_MetaData[] = {
		{ "Category", "JoyCamera" },
		{ "ModuleRelativePath", "Public/JoyCameraManager.h" },
	};
#endif
	void Z_Construct_UClass_AJoyCameraManager_Statics::NewProp_isShowUI_SetBit(void* Obj)
	{
		((AJoyCameraManager*)Obj)->isShowUI = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AJoyCameraManager_Statics::NewProp_isShowUI = { "isShowUI", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AJoyCameraManager), &Z_Construct_UClass_AJoyCameraManager_Statics::NewProp_isShowUI_SetBit, METADATA_PARAMS(Z_Construct_UClass_AJoyCameraManager_Statics::NewProp_isShowUI_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AJoyCameraManager_Statics::NewProp_isShowUI_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AJoyCameraManager_Statics::NewProp_AcceptableRange_MetaData[] = {
		{ "Category", "JoyCamera" },
		{ "ModuleRelativePath", "Public/JoyCameraManager.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AJoyCameraManager_Statics::NewProp_AcceptableRange = { "AcceptableRange", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AJoyCameraManager, AcceptableRange), METADATA_PARAMS(Z_Construct_UClass_AJoyCameraManager_Statics::NewProp_AcceptableRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AJoyCameraManager_Statics::NewProp_AcceptableRange_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AJoyCameraManager_Statics::NewProp_AngleTurnrate_MetaData[] = {
		{ "Category", "JoyCamera" },
		{ "ModuleRelativePath", "Public/JoyCameraManager.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AJoyCameraManager_Statics::NewProp_AngleTurnrate = { "AngleTurnrate", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AJoyCameraManager, AngleTurnrate), METADATA_PARAMS(Z_Construct_UClass_AJoyCameraManager_Statics::NewProp_AngleTurnrate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AJoyCameraManager_Statics::NewProp_AngleTurnrate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AJoyCameraManager_Statics::NewProp_CenterPos_MetaData[] = {
		{ "Category", "JoyCamera" },
		{ "ModuleRelativePath", "Public/JoyCameraManager.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AJoyCameraManager_Statics::NewProp_CenterPos = { "CenterPos", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AJoyCameraManager, CenterPos), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_AJoyCameraManager_Statics::NewProp_CenterPos_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AJoyCameraManager_Statics::NewProp_CenterPos_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AJoyCameraManager_Statics::NewProp_CursorPos_MetaData[] = {
		{ "Category", "JoyCamera" },
		{ "ModuleRelativePath", "Public/JoyCameraManager.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AJoyCameraManager_Statics::NewProp_CursorPos = { "CursorPos", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AJoyCameraManager, CursorPos), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_AJoyCameraManager_Statics::NewProp_CursorPos_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AJoyCameraManager_Statics::NewProp_CursorPos_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AJoyCameraManager_Statics::NewProp_CursorUIClass_MetaData[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "Public/JoyCameraManager.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AJoyCameraManager_Statics::NewProp_CursorUIClass = { "CursorUIClass", nullptr, (EPropertyFlags)0x0014000000010015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AJoyCameraManager, CursorUIClass), Z_Construct_UClass_UUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AJoyCameraManager_Statics::NewProp_CursorUIClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AJoyCameraManager_Statics::NewProp_CursorUIClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AJoyCameraManager_Statics::NewProp_CircleUIClass_MetaData[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "Public/JoyCameraManager.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AJoyCameraManager_Statics::NewProp_CircleUIClass = { "CircleUIClass", nullptr, (EPropertyFlags)0x0014000000010015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AJoyCameraManager, CircleUIClass), Z_Construct_UClass_UUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AJoyCameraManager_Statics::NewProp_CircleUIClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AJoyCameraManager_Statics::NewProp_CircleUIClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AJoyCameraManager_Statics::NewProp_CursorUIInstance_MetaData[] = {
		{ "Category", "UI" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/JoyCameraManager.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AJoyCameraManager_Statics::NewProp_CursorUIInstance = { "CursorUIInstance", nullptr, (EPropertyFlags)0x001000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AJoyCameraManager, CursorUIInstance), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AJoyCameraManager_Statics::NewProp_CursorUIInstance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AJoyCameraManager_Statics::NewProp_CursorUIInstance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AJoyCameraManager_Statics::NewProp_CircleUIInstance_MetaData[] = {
		{ "Category", "UI" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/JoyCameraManager.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AJoyCameraManager_Statics::NewProp_CircleUIInstance = { "CircleUIInstance", nullptr, (EPropertyFlags)0x001000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AJoyCameraManager, CircleUIInstance), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AJoyCameraManager_Statics::NewProp_CircleUIInstance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AJoyCameraManager_Statics::NewProp_CircleUIInstance_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AJoyCameraManager_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AJoyCameraManager_Statics::NewProp_isUseJoyCamera,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AJoyCameraManager_Statics::NewProp_isDebugMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AJoyCameraManager_Statics::NewProp_isShowUI,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AJoyCameraManager_Statics::NewProp_AcceptableRange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AJoyCameraManager_Statics::NewProp_AngleTurnrate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AJoyCameraManager_Statics::NewProp_CenterPos,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AJoyCameraManager_Statics::NewProp_CursorPos,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AJoyCameraManager_Statics::NewProp_CursorUIClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AJoyCameraManager_Statics::NewProp_CircleUIClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AJoyCameraManager_Statics::NewProp_CursorUIInstance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AJoyCameraManager_Statics::NewProp_CircleUIInstance,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AJoyCameraManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AJoyCameraManager>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AJoyCameraManager_Statics::ClassParams = {
		&AJoyCameraManager::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AJoyCameraManager_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AJoyCameraManager_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AJoyCameraManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AJoyCameraManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AJoyCameraManager()
	{
		if (!Z_Registration_Info_UClass_AJoyCameraManager.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AJoyCameraManager.OuterSingleton, Z_Construct_UClass_AJoyCameraManager_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AJoyCameraManager.OuterSingleton;
	}
	template<> VIEWCONTROLLERFORREMOTE_API UClass* StaticClass<AJoyCameraManager>()
	{
		return AJoyCameraManager::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AJoyCameraManager);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_ViewControllerForRemote_Source_ViewControllerForRemote_Public_JoyCameraManager_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_ViewControllerForRemote_Source_ViewControllerForRemote_Public_JoyCameraManager_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AJoyCameraManager, AJoyCameraManager::StaticClass, TEXT("AJoyCameraManager"), &Z_Registration_Info_UClass_AJoyCameraManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AJoyCameraManager), 1226624978U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_ViewControllerForRemote_Source_ViewControllerForRemote_Public_JoyCameraManager_h_4009446572(TEXT("/Script/ViewControllerForRemote"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_ViewControllerForRemote_Source_ViewControllerForRemote_Public_JoyCameraManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_ViewControllerForRemote_Source_ViewControllerForRemote_Public_JoyCameraManager_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
