#pragma once
#include "CoreMinimal.h"
#include "YFinalizeAccountLinkingRequest.generated.h"

USTRUCT(BlueprintType)
struct FYFinalizeAccountLinkingRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString targetUserIdPlayFabMaster;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString targetUserIdPlatform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString targetPlayFabPlatformName;
    
    YPLATFORMUTILS_API FYFinalizeAccountLinkingRequest();
};

