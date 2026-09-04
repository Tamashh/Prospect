#pragma once
#include "CoreMinimal.h"
#include "YMapErrorInfo.generated.h"

USTRUCT(BlueprintType)
struct FYMapErrorInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> m_errors;
    
    PROSPECT_API FYMapErrorInfo();
};

