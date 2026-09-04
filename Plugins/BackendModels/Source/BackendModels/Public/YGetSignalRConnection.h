#pragma once
#include "CoreMinimal.h"
#include "YGetSignalRConnection.generated.h"

USTRUCT(BlueprintType)
struct BACKENDMODELS_API FYGetSignalRConnection {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString UserId;
    
    FYGetSignalRConnection();
};

