#pragma once
#include "CoreMinimal.h"
#include "YDataTableRowBase.h"
#include "YConfigurationRow.generated.h"

USTRUCT(BlueprintType)
struct FYConfigurationRow : public FYDataTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString m_surveyLink;
    
    PROSPECT_API FYConfigurationRow();
};

