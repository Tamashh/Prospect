#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "Engine/DataTable.h"
#include "YInventoryItem.h"
#include "YModCheatFunctions.generated.h"

class AActor;

UCLASS(Blueprintable)
class UYModCheatFunctions : public UObject {
    GENERATED_BODY()
public:
    UYModCheatFunctions();

    UFUNCTION(BlueprintCallable)
    static void YDebugUpdateWeapon(AActor* actorContext, const FYInventoryItem& weapon);
    
    UFUNCTION(BlueprintCallable)
    static void YDebugAddAttachmentsAsRowHandles(AActor* actorContext, TArray<FDataTableRowHandle> modRowHandles);
    
};

