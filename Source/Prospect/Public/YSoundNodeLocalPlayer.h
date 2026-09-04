#pragma once
#include "CoreMinimal.h"
#include "Sound/SoundNode.h"
#include "YSoundNodeLocalPlayer.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UYSoundNodeLocalPlayer : public USoundNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool m_previewPlayForceOutputLocal;
    
    UYSoundNodeLocalPlayer();

};

