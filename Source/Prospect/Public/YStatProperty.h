#pragma once
#include "CoreMinimal.h"
#include "YStatProperty.generated.h"

USTRUCT(BlueprintType)
struct FYStatProperty {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString m_propertyKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString m_propertyName;
    
    PROSPECT_API FYStatProperty();
};

