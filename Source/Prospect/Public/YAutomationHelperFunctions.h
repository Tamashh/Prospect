#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "EYAutomationTestResult.h"
#include "EYMetricsType.h"
#include "YElasticsearchData.h"
#include "YPlayerAutomationData.h"
#include "YWeaponModCombinationWithDamage.h"
#include "YWeaponSuitableMods.h"
#include "YWeaponSuitableModsCombination.h"
#include "YAutomationHelperFunctions.generated.h"

class AActor;

UCLASS(Blueprintable)
class PROSPECT_API UYAutomationHelperFunctions : public UObject {
    GENERATED_BODY()
public:
    UYAutomationHelperFunctions();

    UFUNCTION(BlueprintCallable)
    static void YRequestQuit(bool Force, const FString& quitWithErrorMessage);
    
    UFUNCTION(BlueprintCallable)
    static AActor* SpawnAutomationMangerActor(AActor* Actor, UClass* ActorClass, FTransform ActorLotation);
    
    UFUNCTION(BlueprintCallable)
    static void SendElasticsearchData(const FYElasticsearchData& Data, EYMetricsType metricsType);
    
    UFUNCTION(BlueprintCallable)
    static void PrepareData(TArray<FYWeaponSuitableMods> weaponSuitableMods, TArray<FYWeaponSuitableModsCombination>& outCombinationNames);
    
    UFUNCTION(BlueprintCallable)
    static void ModDamageDataToCSV(TArray<FYWeaponModCombinationWithDamage> damageData);
    
    UFUNCTION(BlueprintCallable)
    static void LogWeaponDamageAutomationString(const FString& LogString);
    
    UFUNCTION(BlueprintCallable)
    static void LogTestResult(EYAutomationTestResult testResult, const FString& LogString, const FString& testName);
    
    UFUNCTION(BlueprintCallable)
    static void LogSoakTestString(const FString& LogString);
    
    UFUNCTION(BlueprintCallable)
    static void LogErrorWeaponDamageAutomationString(const FString& LogString);
    
    UFUNCTION(BlueprintCallable)
    static void LogErrorSoakTestString(const FString& LogString);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsAutomationTesting();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsAutomatedSmokecheck();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName GetStreamingLevelNameFromActor(AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    static FString GetMapName();
    
    UFUNCTION(BlueprintCallable)
    static void GetCombinationsOfMods(TArray<FYWeaponSuitableMods> weaponSuitableMods, TArray<FYWeaponSuitableModsCombination>& outCombination, int32 numOfModSlots, int32 numOfCombinations, int32 currentModSlotIdx);
    
    UFUNCTION(BlueprintCallable)
    static FYPlayerAutomationData FindActiveAutomationData(UObject* objectContext);
    
    UFUNCTION(BlueprintCallable)
    static void CleanupProfilingFolder();
    
};

