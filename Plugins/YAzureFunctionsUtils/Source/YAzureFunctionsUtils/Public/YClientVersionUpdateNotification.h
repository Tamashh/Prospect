#pragma once
#include "CoreMinimal.h"
#include "YClientVersionUpdateNotification.generated.h"

USTRUCT(BlueprintType)
struct YAZUREFUNCTIONSUTILS_API FYClientVersionUpdateNotification {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 clientVersion;
    
    FYClientVersionUpdateNotification();
};

