// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NumberBaseball/NumberBaseballLib.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNumberBaseballLib() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
NUMBERBASEBALL_API UClass* Z_Construct_UClass_UNumberBaseballLib();
NUMBERBASEBALL_API UClass* Z_Construct_UClass_UNumberBaseballLib_NoRegister();
UPackage* Z_Construct_UPackage__Script_NumberBaseball();
// End Cross Module References

// Begin Class UNumberBaseballLib Function DecreaseRemainInputCount
struct Z_Construct_UFunction_UNumberBaseballLib_DecreaseRemainInputCount_Statics
{
	struct NumberBaseballLib_eventDecreaseRemainInputCount_Parms
	{
		int32 RemainInputCount;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "NumberBaseball" },
		{ "ModuleRelativePath", "NumberBaseballLib.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_RemainInputCount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UNumberBaseballLib_DecreaseRemainInputCount_Statics::NewProp_RemainInputCount = { "RemainInputCount", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NumberBaseballLib_eventDecreaseRemainInputCount_Parms, RemainInputCount), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNumberBaseballLib_DecreaseRemainInputCount_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNumberBaseballLib_DecreaseRemainInputCount_Statics::NewProp_RemainInputCount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNumberBaseballLib_DecreaseRemainInputCount_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNumberBaseballLib_DecreaseRemainInputCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNumberBaseballLib, nullptr, "DecreaseRemainInputCount", nullptr, nullptr, Z_Construct_UFunction_UNumberBaseballLib_DecreaseRemainInputCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNumberBaseballLib_DecreaseRemainInputCount_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNumberBaseballLib_DecreaseRemainInputCount_Statics::NumberBaseballLib_eventDecreaseRemainInputCount_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNumberBaseballLib_DecreaseRemainInputCount_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNumberBaseballLib_DecreaseRemainInputCount_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNumberBaseballLib_DecreaseRemainInputCount_Statics::NumberBaseballLib_eventDecreaseRemainInputCount_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNumberBaseballLib_DecreaseRemainInputCount()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNumberBaseballLib_DecreaseRemainInputCount_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNumberBaseballLib::execDecreaseRemainInputCount)
{
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_RemainInputCount);
	P_FINISH;
	P_NATIVE_BEGIN;
	UNumberBaseballLib::DecreaseRemainInputCount(Z_Param_Out_RemainInputCount);
	P_NATIVE_END;
}
// End Class UNumberBaseballLib Function DecreaseRemainInputCount

// Begin Class UNumberBaseballLib Function GameReset
struct Z_Construct_UFunction_UNumberBaseballLib_GameReset_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "NumberBaseball" },
		{ "ModuleRelativePath", "NumberBaseballLib.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNumberBaseballLib_GameReset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNumberBaseballLib, nullptr, "GameReset", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNumberBaseballLib_GameReset_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNumberBaseballLib_GameReset_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UNumberBaseballLib_GameReset()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNumberBaseballLib_GameReset_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNumberBaseballLib::execGameReset)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	UNumberBaseballLib::GameReset();
	P_NATIVE_END;
}
// End Class UNumberBaseballLib Function GameReset

// Begin Class UNumberBaseballLib Function GenerateRandomNumbers
struct Z_Construct_UFunction_UNumberBaseballLib_GenerateRandomNumbers_Statics
{
	struct NumberBaseballLib_eventGenerateRandomNumbers_Parms
	{
		TArray<int32> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "NumberBaseball" },
		{ "ModuleRelativePath", "NumberBaseballLib.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UNumberBaseballLib_GenerateRandomNumbers_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UNumberBaseballLib_GenerateRandomNumbers_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NumberBaseballLib_eventGenerateRandomNumbers_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNumberBaseballLib_GenerateRandomNumbers_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNumberBaseballLib_GenerateRandomNumbers_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNumberBaseballLib_GenerateRandomNumbers_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNumberBaseballLib_GenerateRandomNumbers_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNumberBaseballLib_GenerateRandomNumbers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNumberBaseballLib, nullptr, "GenerateRandomNumbers", nullptr, nullptr, Z_Construct_UFunction_UNumberBaseballLib_GenerateRandomNumbers_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNumberBaseballLib_GenerateRandomNumbers_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNumberBaseballLib_GenerateRandomNumbers_Statics::NumberBaseballLib_eventGenerateRandomNumbers_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNumberBaseballLib_GenerateRandomNumbers_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNumberBaseballLib_GenerateRandomNumbers_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNumberBaseballLib_GenerateRandomNumbers_Statics::NumberBaseballLib_eventGenerateRandomNumbers_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNumberBaseballLib_GenerateRandomNumbers()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNumberBaseballLib_GenerateRandomNumbers_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNumberBaseballLib::execGenerateRandomNumbers)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<int32>*)Z_Param__Result=UNumberBaseballLib::GenerateRandomNumbers();
	P_NATIVE_END;
}
// End Class UNumberBaseballLib Function GenerateRandomNumbers

// Begin Class UNumberBaseballLib Function HasPlayerWon
struct Z_Construct_UFunction_UNumberBaseballLib_HasPlayerWon_Statics
{
	struct NumberBaseballLib_eventHasPlayerWon_Parms
	{
		int32 Strikes;
		int32 Balls;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "NumberBaseball" },
		{ "ModuleRelativePath", "NumberBaseballLib.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Strikes_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Balls_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Strikes;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Balls;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UNumberBaseballLib_HasPlayerWon_Statics::NewProp_Strikes = { "Strikes", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NumberBaseballLib_eventHasPlayerWon_Parms, Strikes), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Strikes_MetaData), NewProp_Strikes_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UNumberBaseballLib_HasPlayerWon_Statics::NewProp_Balls = { "Balls", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NumberBaseballLib_eventHasPlayerWon_Parms, Balls), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Balls_MetaData), NewProp_Balls_MetaData) };
void Z_Construct_UFunction_UNumberBaseballLib_HasPlayerWon_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((NumberBaseballLib_eventHasPlayerWon_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNumberBaseballLib_HasPlayerWon_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NumberBaseballLib_eventHasPlayerWon_Parms), &Z_Construct_UFunction_UNumberBaseballLib_HasPlayerWon_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNumberBaseballLib_HasPlayerWon_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNumberBaseballLib_HasPlayerWon_Statics::NewProp_Strikes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNumberBaseballLib_HasPlayerWon_Statics::NewProp_Balls,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNumberBaseballLib_HasPlayerWon_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNumberBaseballLib_HasPlayerWon_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNumberBaseballLib_HasPlayerWon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNumberBaseballLib, nullptr, "HasPlayerWon", nullptr, nullptr, Z_Construct_UFunction_UNumberBaseballLib_HasPlayerWon_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNumberBaseballLib_HasPlayerWon_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNumberBaseballLib_HasPlayerWon_Statics::NumberBaseballLib_eventHasPlayerWon_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNumberBaseballLib_HasPlayerWon_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNumberBaseballLib_HasPlayerWon_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNumberBaseballLib_HasPlayerWon_Statics::NumberBaseballLib_eventHasPlayerWon_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNumberBaseballLib_HasPlayerWon()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNumberBaseballLib_HasPlayerWon_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNumberBaseballLib::execHasPlayerWon)
{
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_Strikes);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_Balls);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UNumberBaseballLib::HasPlayerWon(Z_Param_Out_Strikes,Z_Param_Out_Balls);
	P_NATIVE_END;
}
// End Class UNumberBaseballLib Function HasPlayerWon

// Begin Class UNumberBaseballLib Function IsGameCommand
struct Z_Construct_UFunction_UNumberBaseballLib_IsGameCommand_Statics
{
	struct NumberBaseballLib_eventIsGameCommand_Parms
	{
		FString Message;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "NumberBaseball" },
		{ "ModuleRelativePath", "NumberBaseballLib.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Message_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Message;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UNumberBaseballLib_IsGameCommand_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NumberBaseballLib_eventIsGameCommand_Parms, Message), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Message_MetaData), NewProp_Message_MetaData) };
void Z_Construct_UFunction_UNumberBaseballLib_IsGameCommand_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((NumberBaseballLib_eventIsGameCommand_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNumberBaseballLib_IsGameCommand_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NumberBaseballLib_eventIsGameCommand_Parms), &Z_Construct_UFunction_UNumberBaseballLib_IsGameCommand_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNumberBaseballLib_IsGameCommand_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNumberBaseballLib_IsGameCommand_Statics::NewProp_Message,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNumberBaseballLib_IsGameCommand_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNumberBaseballLib_IsGameCommand_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNumberBaseballLib_IsGameCommand_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNumberBaseballLib, nullptr, "IsGameCommand", nullptr, nullptr, Z_Construct_UFunction_UNumberBaseballLib_IsGameCommand_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNumberBaseballLib_IsGameCommand_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNumberBaseballLib_IsGameCommand_Statics::NumberBaseballLib_eventIsGameCommand_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNumberBaseballLib_IsGameCommand_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNumberBaseballLib_IsGameCommand_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNumberBaseballLib_IsGameCommand_Statics::NumberBaseballLib_eventIsGameCommand_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNumberBaseballLib_IsGameCommand()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNumberBaseballLib_IsGameCommand_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNumberBaseballLib::execIsGameCommand)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Message);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UNumberBaseballLib::IsGameCommand(Z_Param_Message);
	P_NATIVE_END;
}
// End Class UNumberBaseballLib Function IsGameCommand

// Begin Class UNumberBaseballLib Function JudgeNumber
struct Z_Construct_UFunction_UNumberBaseballLib_JudgeNumber_Statics
{
	struct NumberBaseballLib_eventJudgeNumber_Parms
	{
		TArray<int32> RandomNumbers;
		FString Message;
		int32 Strikes;
		int32 Balls;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "NumberBaseball" },
		{ "ModuleRelativePath", "NumberBaseballLib.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RandomNumbers_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Message_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_RandomNumbers_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_RandomNumbers;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Message;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Strikes;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Balls;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UNumberBaseballLib_JudgeNumber_Statics::NewProp_RandomNumbers_Inner = { "RandomNumbers", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UNumberBaseballLib_JudgeNumber_Statics::NewProp_RandomNumbers = { "RandomNumbers", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NumberBaseballLib_eventJudgeNumber_Parms, RandomNumbers), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RandomNumbers_MetaData), NewProp_RandomNumbers_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UNumberBaseballLib_JudgeNumber_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NumberBaseballLib_eventJudgeNumber_Parms, Message), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Message_MetaData), NewProp_Message_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UNumberBaseballLib_JudgeNumber_Statics::NewProp_Strikes = { "Strikes", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NumberBaseballLib_eventJudgeNumber_Parms, Strikes), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UNumberBaseballLib_JudgeNumber_Statics::NewProp_Balls = { "Balls", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NumberBaseballLib_eventJudgeNumber_Parms, Balls), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UNumberBaseballLib_JudgeNumber_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NumberBaseballLib_eventJudgeNumber_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNumberBaseballLib_JudgeNumber_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNumberBaseballLib_JudgeNumber_Statics::NewProp_RandomNumbers_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNumberBaseballLib_JudgeNumber_Statics::NewProp_RandomNumbers,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNumberBaseballLib_JudgeNumber_Statics::NewProp_Message,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNumberBaseballLib_JudgeNumber_Statics::NewProp_Strikes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNumberBaseballLib_JudgeNumber_Statics::NewProp_Balls,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNumberBaseballLib_JudgeNumber_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNumberBaseballLib_JudgeNumber_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNumberBaseballLib_JudgeNumber_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNumberBaseballLib, nullptr, "JudgeNumber", nullptr, nullptr, Z_Construct_UFunction_UNumberBaseballLib_JudgeNumber_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNumberBaseballLib_JudgeNumber_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNumberBaseballLib_JudgeNumber_Statics::NumberBaseballLib_eventJudgeNumber_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNumberBaseballLib_JudgeNumber_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNumberBaseballLib_JudgeNumber_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNumberBaseballLib_JudgeNumber_Statics::NumberBaseballLib_eventJudgeNumber_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNumberBaseballLib_JudgeNumber()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNumberBaseballLib_JudgeNumber_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNumberBaseballLib::execJudgeNumber)
{
	P_GET_TARRAY_REF(int32,Z_Param_Out_RandomNumbers);
	P_GET_PROPERTY(FStrProperty,Z_Param_Message);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_Strikes);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_Balls);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=UNumberBaseballLib::JudgeNumber(Z_Param_Out_RandomNumbers,Z_Param_Message,Z_Param_Out_Strikes,Z_Param_Out_Balls);
	P_NATIVE_END;
}
// End Class UNumberBaseballLib Function JudgeNumber

// Begin Class UNumberBaseballLib
void UNumberBaseballLib::StaticRegisterNativesUNumberBaseballLib()
{
	UClass* Class = UNumberBaseballLib::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "DecreaseRemainInputCount", &UNumberBaseballLib::execDecreaseRemainInputCount },
		{ "GameReset", &UNumberBaseballLib::execGameReset },
		{ "GenerateRandomNumbers", &UNumberBaseballLib::execGenerateRandomNumbers },
		{ "HasPlayerWon", &UNumberBaseballLib::execHasPlayerWon },
		{ "IsGameCommand", &UNumberBaseballLib::execIsGameCommand },
		{ "JudgeNumber", &UNumberBaseballLib::execJudgeNumber },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNumberBaseballLib);
UClass* Z_Construct_UClass_UNumberBaseballLib_NoRegister()
{
	return UNumberBaseballLib::StaticClass();
}
struct Z_Construct_UClass_UNumberBaseballLib_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "NumberBaseballLib.h" },
		{ "ModuleRelativePath", "NumberBaseballLib.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UNumberBaseballLib_DecreaseRemainInputCount, "DecreaseRemainInputCount" }, // 1956357337
		{ &Z_Construct_UFunction_UNumberBaseballLib_GameReset, "GameReset" }, // 1264325415
		{ &Z_Construct_UFunction_UNumberBaseballLib_GenerateRandomNumbers, "GenerateRandomNumbers" }, // 1480101071
		{ &Z_Construct_UFunction_UNumberBaseballLib_HasPlayerWon, "HasPlayerWon" }, // 1218220386
		{ &Z_Construct_UFunction_UNumberBaseballLib_IsGameCommand, "IsGameCommand" }, // 3884088204
		{ &Z_Construct_UFunction_UNumberBaseballLib_JudgeNumber, "JudgeNumber" }, // 905896502
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNumberBaseballLib>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UNumberBaseballLib_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_NumberBaseball,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNumberBaseballLib_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNumberBaseballLib_Statics::ClassParams = {
	&UNumberBaseballLib::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNumberBaseballLib_Statics::Class_MetaDataParams), Z_Construct_UClass_UNumberBaseballLib_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNumberBaseballLib()
{
	if (!Z_Registration_Info_UClass_UNumberBaseballLib.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNumberBaseballLib.OuterSingleton, Z_Construct_UClass_UNumberBaseballLib_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNumberBaseballLib.OuterSingleton;
}
template<> NUMBERBASEBALL_API UClass* StaticClass<UNumberBaseballLib>()
{
	return UNumberBaseballLib::StaticClass();
}
UNumberBaseballLib::UNumberBaseballLib(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNumberBaseballLib);
UNumberBaseballLib::~UNumberBaseballLib() {}
// End Class UNumberBaseballLib

// Begin Registration
struct Z_CompiledInDeferFile_FID_NumberBaseball_Source_NumberBaseball_NumberBaseballLib_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNumberBaseballLib, UNumberBaseballLib::StaticClass, TEXT("UNumberBaseballLib"), &Z_Registration_Info_UClass_UNumberBaseballLib, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNumberBaseballLib), 3080086010U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_NumberBaseball_Source_NumberBaseball_NumberBaseballLib_h_3884347338(TEXT("/Script/NumberBaseball"),
	Z_CompiledInDeferFile_FID_NumberBaseball_Source_NumberBaseball_NumberBaseballLib_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_NumberBaseball_Source_NumberBaseball_NumberBaseballLib_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
