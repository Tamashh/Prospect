#pragma once
#include "CoreMinimal.h"
#include "YMiscSettingValueSpecifier.generated.h"

USTRUCT(BlueprintType)
struct PROSPECT_API FYMiscSettingValueSpecifier {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_defaultValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, float> m_overridenValues;
    
    FYMiscSettingValueSpecifier();
};

