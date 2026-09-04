#pragma once
#include "CoreMinimal.h"
#include "EYGameplayAttribute.h"
#include "YStatTypeEntryAssociation.generated.h"

USTRUCT(BlueprintType)
struct FYStatTypeEntryAssociation {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EYGameplayAttribute> m_attributes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_baseValue;
    
    PROSPECT_API FYStatTypeEntryAssociation();
};

