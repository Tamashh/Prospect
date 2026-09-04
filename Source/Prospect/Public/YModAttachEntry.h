#pragma once
#include "CoreMinimal.h"
#include "YModAttachEntry.generated.h"

class USkeletalMesh;

USTRUCT(BlueprintType)
struct FYModAttachEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USkeletalMesh> m_mesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_socketAttachmentName;
    
    PROSPECT_API FYModAttachEntry();
};

