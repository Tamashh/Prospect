#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "EYInputActionName.h"
#include "YKeyOverrideColorData.h"
#include "YControllerKeyboardLightiningComponent.generated.h"

class AActor;
class APawn;
class UInputComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UYControllerKeyboardLightiningComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UYControllerKeyboardLightiningComponent(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void OnPossedPawnDeathStateActivated();
    
    UFUNCTION(BlueprintCallable)
    void OnPawnStateChanged(APawn* oldPawn, APawn* newPawn);
    
    UFUNCTION(BlueprintCallable)
    void OnInputStackChanged(TArray<UInputComponent*> inputComponents);
    
public:
    UFUNCTION(BlueprintCallable)
    static int32 ForceSpecificColorOnKeyboard(AActor* relevantActor, FYKeyOverrideColorData Data, bool clearPreviousExplicitColors);
    
    UFUNCTION(BlueprintCallable)
    static bool ForceSpecificActionNameColorOnKeyboard(AActor* relevantActor, FLinearColor explicitColor, EYInputActionName ActionName);
    
    UFUNCTION(BlueprintCallable)
    static bool ClearSpecificAnimationKeyboardKeyOverride(AActor* relevantActor, EYInputActionName ActionName);
    
    UFUNCTION(BlueprintCallable)
    static void ClearCompleteKeyboardOverride(AActor* relevantActor, int32 Handle);
    
};

