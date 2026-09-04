#pragma once
#include "CoreMinimal.h"
#include "EYFriendsImportResultCode.h"
#include "YFriendsImportResponse.generated.h"

USTRUCT(BlueprintType)
struct FYFriendsImportResponse {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EYFriendsImportResultCode resultCode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 numOfImportedFriends;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 numOfLinkedFriends;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 maxFriendsLimit;
    
    YPLATFORMUTILS_API FYFriendsImportResponse();
};

