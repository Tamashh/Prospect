#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "Engine/DataTable.h"
#include "YAudioSettingsRow.h"
#include "YGameModeTuning.h"
#include "YPlayerTuningDataTableRow.h"
#include "YPlayerUIHealthBarDeltaSettings.h"
#include "YDataTableExternalFunctions.generated.h"

class UDataTable;

UCLASS(Blueprintable, Config=Game)
class UYDataTableExternalFunctions : public UObject {
    GENERATED_BODY()
public:
    UYDataTableExternalFunctions();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool TryFindPlayerTuningRow(FYPlayerTuningDataTableRow& tuningRow);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString ToDebugString(FDataTableRowHandle rowHandle);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsDataTableRowHandleValid(FDataTableRowHandle rowHandle);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsDatatableOfStructType_PlayerAwarenessNotification(UDataTable* DataTable);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsDatatableOfStructType_CommWheel(UDataTable* DataTable);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void FindHealtBarDeltaTuning(FYPlayerUIHealthBarDeltaSettings& healtBarDeltaTuning);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool FindGameModeTuningRow(const UObject* WorldContextObject, FYGameModeTuning& row);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void FindAudioSettingsRow(FYAudioSettingsRow& row);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool AreRowHandlesEqual(FDataTableRowHandle A, FDataTableRowHandle B);
    
};

