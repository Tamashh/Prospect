#pragma once
#include "CoreMinimal.h"
#include "YVanityItemRowBase.h"
#include "YWeaponVanityMeshAttachment.h"
#include "YWeaponVanityRow.generated.h"

class UMaterialInterface;

USTRUCT(BlueprintType)
struct FYWeaponVanityRow : public FYVanityItemRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, TSoftObjectPtr<UMaterialInterface>> m_defaultAttachmentMaterials;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_vanityWeaponCharmSocket;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FYWeaponVanityMeshAttachment> m_overrideVanityMeshAttachments;
    
    PROSPECT_API FYWeaponVanityRow();
};

