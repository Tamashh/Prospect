#pragma once
#include "CoreMinimal.h"
#include "YEQSParameterFloat.generated.h"

USTRUCT(BlueprintType)
struct FYEQSParameterFloat {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_value;
    
    PROSPECT_API FYEQSParameterFloat();
};

