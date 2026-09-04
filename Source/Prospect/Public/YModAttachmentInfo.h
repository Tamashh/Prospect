#pragma once
#include "CoreMinimal.h"
#include "YModAttachEntry.h"
#include "YModAttachmentInfo.generated.h"

USTRUCT(BlueprintType)
struct FYModAttachmentInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYModAttachEntry m_modAttachEntryInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_isDefaultAttachment;
    
    PROSPECT_API FYModAttachmentInfo();
};

