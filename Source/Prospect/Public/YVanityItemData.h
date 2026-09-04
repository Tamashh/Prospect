#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "YVanityItemData.generated.h"

USTRUCT(BlueprintType)
struct FYVanityItemData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle m_rowHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_variation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_isHiddenForCustomization;
    
    PROSPECT_API FYVanityItemData();
};

