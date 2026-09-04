#pragma once
#include "CoreMinimal.h"
#include "YSetUserDataResult.generated.h"

USTRUCT(BlueprintType)
struct YAZUREFUNCTIONSUTILS_API FYSetUserDataResult {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_success;
    
    FYSetUserDataResult();
};

