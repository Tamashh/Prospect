#pragma once
#include "CoreMinimal.h"
#include "YGetUserDataResult.generated.h"

USTRUCT(BlueprintType)
struct YAZUREFUNCTIONSUTILS_API FYGetUserDataResult {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FString> m_keyPair;
    
    FYGetUserDataResult();
};

