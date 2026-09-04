#pragma once
#include "CoreMinimal.h"
#include "YGeneratorInfo.generated.h"

USTRUCT(BlueprintType)
struct FYGeneratorInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_currentAmount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_maxAmount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_generatorId;
    
    PROSPECT_API FYGeneratorInfo();
};

