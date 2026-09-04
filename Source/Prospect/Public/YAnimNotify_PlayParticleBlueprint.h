#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify_PlayParticleEffect.h"
#include "YAnimNotify_PlayParticleBlueprint.generated.h"

class UAnimSequenceBase;
class USkeletalMeshComponent;

UCLASS(Blueprintable, CollapseCategories)
class PROSPECT_API UYAnimNotify_PlayParticleBlueprint : public UAnimNotify_PlayParticleEffect {
    GENERATED_BODY()
public:
    UYAnimNotify_PlayParticleBlueprint();

private:
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void PlayParticle(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation) const;
    
};

