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
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTextRenderComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AColorComander::execCheckColor)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_color);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CheckColor(Z_Param_color);
		P_NATIVE_END;
	}
	void AColorComander::StaticRegisterNativesAColorComander()
	{
		UClass* Class = AColorComander::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CheckColor", &AColorComander::execCheckColor },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AColorComander_CheckColor_Statics
	{
		struct ColorComander_eventCheckColor_Parms
		{
			FString color;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_color;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AColorComander_CheckColor_Statics::NewProp_color = { "color", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ColorComander_eventCheckColor_Parms, color), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AColorComander_CheckColor_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ColorComander_eventCheckColor_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AColorComander_CheckColor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ColorComander_eventCheckColor_Parms), &Z_Construct_UFunction_AColorComander_CheckColor_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AColorComander_CheckColor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AColorComander_CheckColor_Statics::NewProp_color,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AColorComander_CheckColor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AColorComander_CheckColor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ColorComander.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AColorComander_CheckColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AColorComander, nullptr, "CheckColor", nullptr, nullptr, sizeof(Z_Construct_UFunction_AColorComander_CheckColor_Statics::ColorComander_eventCheckColor_Parms), Z_Construct_UFunction_AColorComander_CheckColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AColorComander_CheckColor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AColorComander_CheckColor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AColorComander_CheckColor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AColorComander_CheckColor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AColorComander_CheckColor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AColorComander);
	UClass* Z_Construct_UClass_AColorComander_NoRegister()
	{
		return AColorComander::StaticClass();
	}
	struct Z_Construct_UClass_AColorComander_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultRoot_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DefaultRoot;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ColorComander_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ColorComander;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TextRenderColor_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TextRenderColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TextRenderNumber_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TextRenderNumber;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ColorsArray_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ColorsArray_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ColorsArray;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ColorsArrayIndex_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_ColorsArrayIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AColorComander_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_MemoryColor_Benitez,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AColorComander_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AColorComander_CheckColor, "CheckColor" }, // 2657551302
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AColorComander_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ColorComander.h" },
		{ "ModuleRelativePath", "ColorComander.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AColorComander_Statics::NewProp_DefaultRoot_MetaData[] = {
		{ "Category", "ColorComander" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ColorComander.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AColorComander_Statics::NewProp_DefaultRoot = { "DefaultRoot", nullptr, (EPropertyFlags)0x00400000000b0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AColorComander, DefaultRoot), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AColorComander_Statics::NewProp_DefaultRoot_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AColorComander_Statics::NewProp_DefaultRoot_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AColorComander_Statics::NewProp_ColorComander_MetaData[] = {
		{ "Category", "ColorComander" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ColorComander.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AColorComander_Statics::NewProp_ColorComander = { "ColorComander", nullptr, (EPropertyFlags)0x00100000000b000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AColorComander, ColorComander), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AColorComander_Statics::NewProp_ColorComander_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AColorComander_Statics::NewProp_ColorComander_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AColorComander_Statics::NewProp_TextRenderColor_MetaData[] = {
		{ "Category", "ColorComander" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ColorComander.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AColorComander_Statics::NewProp_TextRenderColor = { "TextRenderColor", nullptr, (EPropertyFlags)0x00100000000b000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AColorComander, TextRenderColor), Z_Construct_UClass_UTextRenderComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AColorComander_Statics::NewProp_TextRenderColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AColorComander_Statics::NewProp_TextRenderColor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AColorComander_Statics::NewProp_TextRenderNumber_MetaData[] = {
		{ "Category", "ColorComander" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ColorComander.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AColorComander_Statics::NewProp_TextRenderNumber = { "TextRenderNumber", nullptr, (EPropertyFlags)0x00100000000b000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AColorComander, TextRenderNumber), Z_Construct_UClass_UTextRenderComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AColorComander_Statics::NewProp_TextRenderNumber_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AColorComander_Statics::NewProp_TextRenderNumber_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_AColorComander_Statics::NewProp_ColorsArray_Inner = { "ColorsArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AColorComander_Statics::NewProp_ColorsArray_MetaData[] = {
		{ "Category", "ColorComander" },
		{ "ModuleRelativePath", "ColorComander.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AColorComander_Statics::NewProp_ColorsArray = { "ColorsArray", nullptr, (EPropertyFlags)0x0010020000000004, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AColorComander, ColorsArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AColorComander_Statics::NewProp_ColorsArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AColorComander_Statics::NewProp_ColorsArray_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AColorComander_Statics::NewProp_ColorsArrayIndex_MetaData[] = {
		{ "Category", "ColorComander" },
		{ "ModuleRelativePath", "ColorComander.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AColorComander_Statics::NewProp_ColorsArrayIndex = { "ColorsArrayIndex", nullptr, (EPropertyFlags)0x0010020000000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AColorComander, ColorsArrayIndex), METADATA_PARAMS(Z_Construct_UClass_AColorComander_Statics::NewProp_ColorsArrayIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AColorComander_Statics::NewProp_ColorsArrayIndex_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AColorComander_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AColorComander_Statics::NewProp_DefaultRoot,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AColorComander_Statics::NewProp_ColorComander,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AColorComander_Statics::NewProp_TextRenderColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AColorComander_Statics::NewProp_TextRenderNumber,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AColorComander_Statics::NewProp_ColorsArray_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AColorComander_Statics::NewProp_ColorsArray,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AColorComander_Statics::NewProp_ColorsArrayIndex,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AColorComander_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AColorComander>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AColorComander_Statics::ClassParams = {
		&AColorComander::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AColorComander_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AColorComander_Statics::PropPointers),
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
		{ Z_Construct_UClass_AColorComander, AColorComander::StaticClass, TEXT("AColorComander"), &Z_Registration_Info_UClass_AColorComander, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AColorComander), 3870312675U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MemoryColor_Benitez_Source_MemoryColor_Benitez_ColorComander_h_2130371623(TEXT("/Script/MemoryColor_Benitez"),
		Z_CompiledInDeferFile_FID_MemoryColor_Benitez_Source_MemoryColor_Benitez_ColorComander_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MemoryColor_Benitez_Source_MemoryColor_Benitez_ColorComander_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
