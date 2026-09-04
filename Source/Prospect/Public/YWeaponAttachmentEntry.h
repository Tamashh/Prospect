#pragma once
#include "CoreMinimal.h"
#include "YWeaponAttachmentEntry.generated.h"

class USkeletalMesh;

USTRUCT(BlueprintType)
struct FYWeaponAttachmentEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USkeletalMesh> m_skeletalMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_socketName;
    
    PROSPECT_API FYWeaponAttachmentEntry();
};

