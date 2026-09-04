#pragma once
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "YOcclusionAudioDataComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PROSPECT_API UYOcclusionAudioDataComponent : public USceneComponent {
    GENERATED_BODY()
public:
    UYOcclusionAudioDataComponent(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void OnLinkedComponentDeactivated();
    
};

