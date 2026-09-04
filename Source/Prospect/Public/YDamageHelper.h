#pragma once
#include "CoreMinimal.h"
#include "YDamageHelper.generated.h"

USTRUCT(BlueprintType)
struct FYDamageHelper {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_isLoggingEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_baseDamage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_multiplierRawAccumulated;
    
public:
    PROSPECT_API FYDamageHelper();
};

