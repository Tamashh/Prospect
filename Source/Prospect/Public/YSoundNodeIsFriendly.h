#pragma once
#include "CoreMinimal.h"
#include "Sound/SoundNode.h"
#include "YSoundNodeIsFriendly.generated.h"

class AActor;

UCLASS(Blueprintable, EditInlineNew)
class UYSoundNodeIsFriendly : public USoundNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool m_previewPlayForceFriendly;
    
    UYSoundNodeIsFriendly();

    UFUNCTION(BlueprintCallable)
    static void UpdateIsFriendlyActorId(AActor* Actor, bool isFriendly);
    
};

