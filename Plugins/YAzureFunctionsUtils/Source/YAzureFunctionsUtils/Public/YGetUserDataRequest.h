#pragma once
#include "CoreMinimal.h"
#include "YGetUserDataRequest.generated.h"

USTRUCT(BlueprintType)
struct YAZUREFUNCTIONSUTILS_API FYGetUserDataRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> m_keys;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString m_playFabId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_readOnly;
    
    FYGetUserDataRequest();
};

