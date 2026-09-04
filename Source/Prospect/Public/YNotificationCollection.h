#pragma once
#include "CoreMinimal.h"
#include "YNotificationDescription.h"
#include "YNotificationCollection.generated.h"

USTRUCT(BlueprintType)
struct FYNotificationCollection {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FYNotificationDescription> notifications;
    
    PROSPECT_API FYNotificationCollection();
};

