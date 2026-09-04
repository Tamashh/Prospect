#pragma once
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "YGenericDebuggerShapeEntry.h"
#include "YPlayerCarryingComponent.generated.h"

class AYPlayerCharacter;
class UYCarryableComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PROSPECT_API UYPlayerCarryingComponent : public USceneComponent {
    GENERATED_BODY()
public:
    UYPlayerCarryingComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void TryDeactivateCarryingState();
    
    UFUNCTION(BlueprintCallable)
    bool TryActivateCarryingState();
    
    UFUNCTION(BlueprintCallable)
    void OnPutCharacterIntoReconnectState(AYPlayerCharacter* playerCharacter);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    FString BP_GetDebugDescription();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    TArray<FYGenericDebuggerShapeEntry> BP_GetCarryingDebugData();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UYCarryableComponent* BP_GetCarryableComponent();
    
};

