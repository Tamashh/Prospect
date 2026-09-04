#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "YMapErrorInfo.h"
#include "YActorWithMapCheck.generated.h"

UCLASS(Blueprintable)
class AYActorWithMapCheck : public AActor {
    GENERATED_BODY()
public:
    AYActorWithMapCheck(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    FYMapErrorInfo BP_CheckForErrors();
    
};

