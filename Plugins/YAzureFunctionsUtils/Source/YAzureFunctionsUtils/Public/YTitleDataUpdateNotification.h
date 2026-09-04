#pragma once
#include "CoreMinimal.h"
#include "YTitleDataUpdateNotification.generated.h"

USTRUCT(BlueprintType)
struct YAZUREFUNCTIONSUTILS_API FYTitleDataUpdateNotification {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> Keys;
    
    FYTitleDataUpdateNotification();
};

