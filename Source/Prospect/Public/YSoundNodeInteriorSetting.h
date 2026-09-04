#pragma once
#include "CoreMinimal.h"
#include "Sound/SoundNode.h"
#include "YSoundNodeInteriorSetting.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UYSoundNodeInteriorSetting : public USoundNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool m_previewIsInInterior;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_alwaysUseInterior;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_interiorTransitionTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_hasCalculatedInitialValueParameterName;
    
    UYSoundNodeInteriorSetting();

};

