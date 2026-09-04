#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "Engine/DataTable.h"
#include "YInventoryCheatFunctions.generated.h"

class AActor;

UCLASS(Blueprintable)
class UYInventoryCheatFunctions : public UObject {
    GENERATED_BODY()
public:
    UYInventoryCheatFunctions();

    UFUNCTION(BlueprintCallable)
    static void YDebugGiveItems(AActor* actorContext, TArray<FDataTableRowHandle> relevantItems);
    
    UFUNCTION(BlueprintCallable)
    static void OpenDefaultInventoryAssetByContext(AActor* actorContext);
    
};

