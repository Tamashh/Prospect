#pragma once
#include "CoreMinimal.h"
#include "YStationUserPings.h"
#include "YRequestStationConnect.generated.h"

USTRUCT(BlueprintType)
struct FYRequestStationConnect {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString UserId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool isDevelopment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FYStationUserPings> userPings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool isMatch;
    
    BACKENDMODELS_API FYRequestStationConnect();
};

