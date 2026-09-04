#pragma once
#include "CoreMinimal.h"
#include "YFriendsImportRequest.generated.h"

USTRUCT(BlueprintType)
struct FYFriendsImportRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString loginIdentityProviderString;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString AccessToken;
    
    YPLATFORMUTILS_API FYFriendsImportRequest();
};

