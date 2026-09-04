#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "YStateInputFrameCachedData.generated.h"

USTRUCT(BlueprintType)
struct FYStateInputFrameCachedData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator m_inputRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator m_deltaRotation;
    
    PROSPECT_API FYStateInputFrameCachedData();
};

