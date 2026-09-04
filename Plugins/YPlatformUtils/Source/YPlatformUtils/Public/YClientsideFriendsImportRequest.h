#pragma once
#include "CoreMinimal.h"
#include "EYGamePlatform.h"
#include "YClientsideFriendsImportRequest.generated.h"

USTRUCT(BlueprintType)
struct FYClientsideFriendsImportRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EYGamePlatform Platform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> userIds;
    
    YPLATFORMUTILS_API FYClientsideFriendsImportRequest();
};

