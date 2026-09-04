#pragma once
#include "CoreMinimal.h"
#include "YMapMarkerComponent.h"
#include "YPlayerMapMarkerComponent.generated.h"

class AYPlayerState;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UYPlayerMapMarkerComponent : public UYMapMarkerComponent {
    GENERATED_BODY()
public:
    UYPlayerMapMarkerComponent(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void OnPlayerStateSet(AYPlayerState* PlayerState);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnCloakChanged(bool IsCloaked);
    
};

