#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "YAnimNotifyState_TargetConverge.generated.h"

class UAnimSequenceBase;
class USkeletalMeshComponent;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class PROSPECT_API UYAnimNotifyState_TargetConverge : public UAnimNotifyState {
    GENERATED_BODY()
public:
    UYAnimNotifyState_TargetConverge();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveRootMotionExtracted(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, FTransform RootMotion, float FrameDeltaTime, float currentTime, float RemainingTime) const;
    
};

