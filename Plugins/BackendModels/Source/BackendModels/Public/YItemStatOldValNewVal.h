#pragma once
#include "CoreMinimal.h"
#include "YItemStatOldValNewVal.generated.h"

USTRUCT(BlueprintType)
struct BACKENDMODELS_API FYItemStatOldValNewVal {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_itemStatType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_currentVal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_newVal;
    
    FYItemStatOldValNewVal();
};

