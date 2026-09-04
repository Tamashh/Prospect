#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "EYAlienForgeCanItemBeForgedState.h"
#include "YAlienForgeProgressDescriptionState.h"
#include "YAlienForgeUIInventoryState.h"
#include "YAlienForgeRecipeFunctions.generated.h"

class AActor;

UCLASS(Blueprintable)
class UYAlienForgeRecipeFunctions : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UYAlienForgeRecipeFunctions();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static EYAlienForgeCanItemBeForgedState CanForgeBeStarted(const AActor* WorldContext, const FYAlienForgeUIInventoryState& alienForgeUIInventoryState, FYAlienForgeProgressDescriptionState& alienForgeProgressDescriptionState);
    
};

