#pragma once
#include "CoreMinimal.h"
#include "YBaseAnalyticsEvent.h"
#include "YVanityUsage.generated.h"

USTRUCT(BlueprintType)
struct FYVanityUsage : public FYBaseAnalyticsEvent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 vanity_type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Location;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString item_id;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString item_name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 time_since_match_start;
    
    PROSPECT_API FYVanityUsage();
};

