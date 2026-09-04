#pragma once
#include "CoreMinimal.h"
#include "EYGameplayAttribute.h"
#include "EYPerkBool.h"
#include "YAttributeTriggerData.generated.h"

USTRUCT(BlueprintType)
struct FYAttributeTriggerData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EYGameplayAttribute m_attribute;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EYPerkBool m_bool;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_value;
    
    PROSPECT_API FYAttributeTriggerData();
};

