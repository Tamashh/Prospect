#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "Engine/DataTable.h"
#include "YAbilityActionBlinkData.h"
#include "YAbilityActionBombardmentData.h"
#include "YAbilityActionCloakData.h"
#include "YAbilityActionDataTableRow.h"
#include "YAbilityActionHealWardData.h"
#include "YAbilityActionKineticShieldData.h"
#include "YAbilityTransportInitializationData.h"
#include "YWeaponTuningDataTableRow.h"
#include "YAbilityExternalFunctions.generated.h"

UCLASS(Blueprintable)
class UYAbilityExternalFunctions : public UObject {
    GENERATED_BODY()
public:
    UYAbilityExternalFunctions();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool FindWeaponTuningData(FDataTableRowHandle weaponTransportRow, FYWeaponTuningDataTableRow& outData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool FindSpawnedDatatableRowHandleFromObject(UObject* relevantObject, FDataTableRowHandle& outRowHandle);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool FindKineticShieldAbilityDataFromObject(UObject* relevantObject, FYAbilityActionKineticShieldData& outData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool FindHealWardAbilityDataFromObject(UObject* relevantObject, FYAbilityActionHealWardData& outData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool FindCloakAbilityDataFromObject(UObject* relevantObject, FYAbilityActionCloakData& outData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool FindBombardmentAbilityDataFromObject(UObject* relevantObject, FYAbilityActionBombardmentData& outData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool FindBlinkAbilityDataFromObject(UObject* relevantObject, FYAbilityActionBlinkData& outData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool FindAbilityActionDataFromObject(UObject* relevantObject, FYAbilityActionDataTableRow& outData);
    
    UFUNCTION(BlueprintCallable)
    static int32 ExecuteAbilityTransport(const FYAbilityTransportInitializationData& executionInitData);
    
    UFUNCTION(BlueprintCallable)
    static float DetermineActiveTimeTotal(const FDataTableRowHandle& abilityRow, UObject* contextPlayerObject);
    
};

