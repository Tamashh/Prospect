#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "Engine/DataTable.h"
#include "YSceneCompleteInitializationData.h"
#include "YSceneDataTableRow.h"
#include "YSceneFunctionLibrary.generated.h"

class UYSceneManager;

UCLASS(Blueprintable)
class UYSceneFunctionLibrary : public UObject {
    GENERATED_BODY()
public:
    UYSceneFunctionLibrary();

    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContext"))
    static UYSceneManager* FindSceneManager(const UObject* WorldContext);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool FindSceneDataFromRowHandle(const FDataTableRowHandle& rowHandle, FYSceneDataTableRow& outRow);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContext"))
    static bool FindLastInitializationData(const UObject* WorldContext, FYSceneCompleteInitializationData& outData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool FindActiveSceneRowData(const UObject* objCtx, FYSceneDataTableRow& outData);
    
};

