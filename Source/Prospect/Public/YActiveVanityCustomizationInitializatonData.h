#pragma once
#include "CoreMinimal.h"
#include "EYVanityType.h"
#include "Engine/DataTable.h"
#include "YInventoryItem.h"
#include "YActiveVanityCustomizationInitializatonData.generated.h"

class USkeletalMesh;
class UStaticMesh;

USTRUCT(BlueprintType)
struct FYActiveVanityCustomizationInitializatonData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UStaticMesh> m_staticMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USkeletalMesh> m_skeletalMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle m_rowHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYInventoryItem m_desiredInventoryItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EYVanityType m_vanityType;
    
    PROSPECT_API FYActiveVanityCustomizationInitializatonData();
};

