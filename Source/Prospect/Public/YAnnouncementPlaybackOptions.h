#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EYAnnouncementType.h"
#include "YAnnouncementPlaybackOptions.generated.h"

class AYPlayerState;

USTRUCT(BlueprintType)
struct FYAnnouncementPlaybackOptions {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EYAnnouncementType m_announcementType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector m_locationInWorld;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AYPlayerState* m_speakerPlayerState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_resolveVORowByContext;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_shouldHideAnnouncementWidget;
    
    PROSPECT_API FYAnnouncementPlaybackOptions();
};

