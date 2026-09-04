#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "Engine/DataTable.h"
#include "YMatchPhaseVisualRow.h"
#include "YMatchPhaseFunctionsLibrary.generated.h"

UCLASS(Blueprintable)
class PROSPECT_API UYMatchPhaseFunctionsLibrary : public UObject {
    GENERATED_BODY()
public:
    UYMatchPhaseFunctionsLibrary();

    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContext"))
    static FString FindMatchFlowToUse(UObject* WorldContext);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool BlendMatchPhaseVisualRow(FDataTableRowHandle fromPhaseHandle, FDataTableRowHandle toPhaseHandle, float Alpha, FYMatchPhaseVisualRow& outRow);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool BlendMatchPhaseVisualData(FYMatchPhaseVisualRow fromVisualData, FYMatchPhaseVisualRow toVisualData, float Alpha, FYMatchPhaseVisualRow& outRow);
    
};

