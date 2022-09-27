// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MemoryColor_Benitez/ColorComander.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeColorComander() {}
// Cross Module References
	MEMORYCOLOR_BENITEZ_API UClass* Z_Construct_UClass_AColorComander_NoRegister();
	MEMORYCOLOR_BENITEZ_API UClass* Z_Construct_UClass_AColorComander();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_MemoryColor_Benitez();
// End Cross Module References
	void AColorComander::StaticRegisterNativesAColorComander()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AColorComander);
	UClass* Z_Construct_UClass_AColorComander_NoRegister()
	{
		return AColorComander::StaticClass();
	}
	struct Z_Construct_UClass_AColorComander_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AColorComander_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_MemoryColor_Benitez,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AColorComander_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ColorComander.h" },
		{ "ModuleRelativePath", "ColorComander.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AColorComander_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AColorComander>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AColorComander_Statics::ClassParams = {
		&AColorComander::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AColorComander_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AColorComander_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AColorComander()
	{
		if (!Z_Registration_Info_UClass_AColorComander.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AColorComander.OuterSingleton, Z_Construct_UClass_AColorComander_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AColorComander.OuterSingleton;
	}
	template<> MEMORYCOLOR_BENITEZ_API UClass* StaticClass<AColorComander>()
	{
		return AColorComander::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AColorComander);
	struct Z_CompiledInDeferFile_FID_MemoryColor_Benitez_Source_MemoryColor_Benitez_ColorComander_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MemoryColor_Benitez_Source_MemoryColor_Benitez_ColorComander_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AColorComander, AColorComander::StaticClass, TEXT("AColorComander"), &Z_Registration_Info_UClass_AColorComander, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AColorComander), 4150801095U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MemoryColor_Benitez_Source_MemoryColor_Benitez_ColorComander_h_1307888475(TEXT("/Script/MemoryColor_Benitez"),
		Z_CompiledInDeferFile_FID_MemoryColor_Benitez_Source_MemoryColor_Benitez_ColorComander_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MemoryColor_Benitez_Source_MemoryColor_Benitez_ColorComander_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
