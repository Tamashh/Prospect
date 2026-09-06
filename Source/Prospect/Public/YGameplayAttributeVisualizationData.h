#pragma once
#include "CoreMinimal.h"
#include "YDataTableRowBase.h"
#include "YGameplayAttributeVisualizationData.generated.h"

USTRUCT(BlueprintType)
struct FYGameplayAttributeVisualizationData : public FYDataTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText m_displayName;

    PROSPECT_API FYGameplayAttributeVisualizationData();
};
