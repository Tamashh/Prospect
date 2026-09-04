#pragma once
#include "CoreMinimal.h"
#include "YItemVisualAcquisitionData.generated.h"

USTRUCT(BlueprintType)
struct FYItemVisualAcquisitionData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_seasonId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 m_level;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_paidPass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_shopOfferId;
    
    PROSPECT_API FYItemVisualAcquisitionData();
};

