#pragma once
#include "CoreMinimal.h"
#include "EYVolumeBusType.h"
#include "YDataTableRowBase.h"
#include "YAudioSettingsRow.generated.h"

class USoundClass;

USTRUCT(BlueprintType)
struct FYAudioSettingsRow : public FYDataTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_announcementInterruptSoundFadeoutTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fallbackSoundDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_minDurationAnnouncement;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_maxDurationAnnouncement;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_maxQueueTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_factionIdFallback;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_subtitleOcclusionCullingThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EYVolumeBusType, USoundClass*> m_soundClassesPerVolumeBusType;
    
    PROSPECT_API FYAudioSettingsRow();
};

