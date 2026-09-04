#pragma once
#include "CoreMinimal.h"
#include "YSocialPresenceEntry.h"
#include "YSocialPresenceUpdated.generated.h"

USTRUCT(BlueprintType)
struct FYSocialPresenceUpdated {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString UserId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYSocialPresenceEntry entry;
    
    BACKENDMODELS_API FYSocialPresenceUpdated();
};

