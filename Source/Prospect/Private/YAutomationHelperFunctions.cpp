#include "YAutomationHelperFunctions.h"

UYAutomationHelperFunctions::UYAutomationHelperFunctions() {
}

void UYAutomationHelperFunctions::YRequestQuit(bool Force, const FString& quitWithErrorMessage) {
}

AActor* UYAutomationHelperFunctions::SpawnAutomationMangerActor(AActor* Actor, UClass* ActorClass, FTransform ActorLotation) {
    return NULL;
}

void UYAutomationHelperFunctions::SendElasticsearchData(const FYElasticsearchData& Data, EYMetricsType metricsType) {
}

void UYAutomationHelperFunctions::PrepareData(TArray<FYWeaponSuitableMods> weaponSuitableMods, TArray<FYWeaponSuitableModsCombination>& outCombinationNames) {
}

void UYAutomationHelperFunctions::ModDamageDataToCSV(TArray<FYWeaponModCombinationWithDamage> damageData) {
}

void UYAutomationHelperFunctions::LogWeaponDamageAutomationString(const FString& LogString) {
}

void UYAutomationHelperFunctions::LogTestResult(EYAutomationTestResult testResult, const FString& LogString, const FString& testName) {
}

void UYAutomationHelperFunctions::LogSoakTestString(const FString& LogString) {
}

void UYAutomationHelperFunctions::LogErrorWeaponDamageAutomationString(const FString& LogString) {
}

void UYAutomationHelperFunctions::LogErrorSoakTestString(const FString& LogString) {
}

bool UYAutomationHelperFunctions::IsAutomationTesting() {
    return false;
}

bool UYAutomationHelperFunctions::IsAutomatedSmokecheck() {
    return false;
}

FName UYAutomationHelperFunctions::GetStreamingLevelNameFromActor(AActor* Actor) {
    return NAME_None;
}

FString UYAutomationHelperFunctions::GetMapName() {
    return TEXT("");
}

void UYAutomationHelperFunctions::GetCombinationsOfMods(TArray<FYWeaponSuitableMods> weaponSuitableMods, TArray<FYWeaponSuitableModsCombination>& outCombination, int32 numOfModSlots, int32 numOfCombinations, int32 currentModSlotIdx) {
}

FYPlayerAutomationData UYAutomationHelperFunctions::FindActiveAutomationData(UObject* objectContext) {
    return FYPlayerAutomationData{};
}

void UYAutomationHelperFunctions::CleanupProfilingFolder() {
}


