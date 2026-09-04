#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "YItemVisualAcquisitionData.h"
#include "YVanityItemData.h"
#include "YFilterItemEntry.generated.h"

USTRUCT(BlueprintType)
struct FYFilterItemEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle m_rowHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYVanityItemData m_vanityItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYItemVisualAcquisitionData m_acquisitionState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_isEquippedTemporary;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_isEquippedPersistent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_isOwned;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_shouldBePreselected;
    
    PROSPECT_API FYFilterItemEntry();
};

