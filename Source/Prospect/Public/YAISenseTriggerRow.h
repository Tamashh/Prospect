#pragma once
#include "CoreMinimal.h"
#include "EYAISenseType.h"
#include "YDataTableRowBase.h"
#include "YAISenseTriggerRow.generated.h"

USTRUCT(BlueprintType)
struct FYAISenseTriggerRow : public FYDataTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_intensity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_maxRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EYAISenseType m_type;
    
    PROSPECT_API FYAISenseTriggerRow();
};

