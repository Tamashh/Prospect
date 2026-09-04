#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "YAnimNotifyState_PlayLoopingSound.generated.h"

class UAudioComponent;
class USoundBase;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class PROSPECT_API UYAnimNotifyState_PlayLoopingSound : public UAnimNotifyState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* m_sound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fadeOutTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UAudioComponent* m_cachedAudioComponent;
    
    UYAnimNotifyState_PlayLoopingSound();

};

