#pragma once
#include "CoreMinimal.h"
#include "EYGamePlatform.h"
#include "YOnLoginRequest.generated.h"

USTRUCT(BlueprintType)
struct FYOnLoginRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EYGamePlatform gamePlatform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FString> CustomTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool TryBypass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString LoginNonce;
    
    YPLATFORMUTILS_API FYOnLoginRequest();
};

