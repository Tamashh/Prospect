#pragma once
#include "CoreMinimal.h"
#include "YVanityBackendItemInfo.generated.h"

USTRUCT(BlueprintType)
struct BACKENDMODELS_API FYVanityBackendItemInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString vanity_id;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Amount;
    
    FYVanityBackendItemInfo();
};

