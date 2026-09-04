#pragma once
#include "CoreMinimal.h"
#include "YVanityMaterialEntry.h"
#include "YWeaponVanityMeshAttachment.generated.h"

class USkeletalMesh;

USTRUCT(BlueprintType)
struct FYWeaponVanityMeshAttachment {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_attachmentSocket;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USkeletalMesh> m_meshAttachmentSK;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FYVanityMaterialEntry> m_meshAttachmentMaterialOverrides;
    
    PROSPECT_API FYWeaponVanityMeshAttachment();
};

