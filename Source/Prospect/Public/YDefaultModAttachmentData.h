#pragma once
#include "CoreMinimal.h"
#include "EYModificationSlotType.h"
#include "YDefaultModAttachmentData.generated.h"

class USkeletalMesh;

USTRUCT(BlueprintType)
struct FYDefaultModAttachmentData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USkeletalMesh> m_mesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_socketAttachmentName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EYModificationSlotType m_modType;
    
    PROSPECT_API FYDefaultModAttachmentData();
};

