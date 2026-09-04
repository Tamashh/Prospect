#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "YHideableBushManagerComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PROSPECT_API UYHideableBushManagerComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UYHideableBushManagerComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    bool IsSightObstructed(FVector fromLocation, FVector toLocation);
    
};

