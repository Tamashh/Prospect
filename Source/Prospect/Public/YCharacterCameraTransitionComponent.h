#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "YCameraTransitionData.h"
#include "EYPlayerStateBlueprint.h"
#include "YCharacterCameraTransitionComponent.generated.h"

class AActor;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UYCharacterCameraTransitionComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UYCharacterCameraTransitionComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    static bool StartCameraTransition(AActor* Owner, FYCameraTransitionData transitionData);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnAnyStatesDeactivated(const TArray<EYPlayerStateBlueprint>& states);

    UFUNCTION(BlueprintCallable)
    void OnAnyStateChanged();
    
    UFUNCTION(BlueprintCallable)
    void OnAnyStateActivated(EYPlayerStateBlueprint State);

public:
    UFUNCTION(BlueprintCallable)
    static bool IsTransitionActive(AActor* Owner);
    
};

