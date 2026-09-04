#pragma once
#include "CoreMinimal.h"
#include "EYItemType.h"
#include "UObject/NoExportTypes.h"
#include "UObject/Object.h"
#include "YHighlightCheatFunctions.generated.h"

class AActor;

UCLASS(Blueprintable)
class UYHighlightCheatFunctions : public UObject {
    GENERATED_BODY()
public:
    UYHighlightCheatFunctions();

    UFUNCTION(BlueprintCallable)
    static void DumpDebugHighlightState(AActor* actorContext);
    
    UFUNCTION(BlueprintCallable)
    static void DebugRemoveHighlightItemType(AActor* actorContext, TArray<EYItemType> ItemType);
    
    UFUNCTION(BlueprintCallable)
    static void DebugNotifyArrayIndex(AActor* actorContext, int32 Index);
    
    UFUNCTION(BlueprintCallable)
    static void DebugHighlightItemType(AActor* actorContext, TArray<EYItemType> ItemType);
    
    UFUNCTION(BlueprintCallable)
    static FGuid DebugHighlightItemStringId(AActor* actorContext, const FString& ID, bool State);
    
    UFUNCTION(BlueprintCallable)
    static FGuid DebugHighlightItemRowId(AActor* actorContext, const FString& ID, bool State);
    
    UFUNCTION(BlueprintCallable)
    static void DebugClearHighlighting(AActor* actorContext);
    
};

