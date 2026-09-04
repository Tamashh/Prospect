#pragma once
#include "CoreMinimal.h"
#include "YBaseActivityStats.h"
#include "YUplinkActivityStats.generated.h"

USTRUCT(BlueprintType)
struct FYUplinkActivityStats : public FYBaseActivityStats {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 time_since_user_joined;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 last_state;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString item_rarity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString uplink_name;
    
    PROSPECT_API FYUplinkActivityStats();
};

