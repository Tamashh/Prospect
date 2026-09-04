#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "YPlayerTutorialComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PROSPECT_API UYPlayerTutorialComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UYPlayerTutorialComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsFirstTutorialPlaythrough();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnShowEndOfMatch();
    
};

