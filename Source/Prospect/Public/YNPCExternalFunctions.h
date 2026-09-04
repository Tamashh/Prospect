#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "Engine/DataTable.h"
#include "YNPCDataTableRow.h"
#include "YSpawnNPCRequestData.h"
#include "YNPCExternalFunctions.generated.h"

UCLASS(Blueprintable)
class PROSPECT_API UYNPCExternalFunctions : public UObject {
    GENERATED_BODY()
public:
    UYNPCExternalFunctions();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool FindDataFromRowHandle(FDataTableRowHandle rowHandle, FYNPCDataTableRow& outData);
    
    UFUNCTION(BlueprintCallable)
    static bool ExecuteSpawningNPCActorFromHandle(const FYSpawnNPCRequestData& Data);
    
};

