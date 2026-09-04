#pragma once
#include "CoreMinimal.h"
#include "YDataTableRowBase.h"
#include "YAIEQSPreferedRange.generated.h"

USTRUCT(BlueprintType)
struct FYAIEQSPreferedRange : public FYDataTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, float> m_EQSParameters;
    
    PROSPECT_API FYAIEQSPreferedRange();
};

