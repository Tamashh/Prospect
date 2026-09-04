#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "YItemVisualAcquisitionData.h"
#include "YVanityItemSelectionInitializationData.generated.h"

USTRUCT(BlueprintType)
struct FYVanityItemSelectionInitializationData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYItemVisualAcquisitionData m_acqusitionData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle m_associatedHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_isOwned;
    
    PROSPECT_API FYVanityItemSelectionInitializationData();
};

