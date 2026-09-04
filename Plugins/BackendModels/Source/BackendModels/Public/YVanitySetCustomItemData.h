#pragma once
#include "CoreMinimal.h"
#include "YVanitySetCustomItemData.generated.h"

USTRUCT(BlueprintType)
struct FYVanitySetCustomItemData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString UserId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString custom_id;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString vanity_id;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 slotId;
    
    BACKENDMODELS_API FYVanitySetCustomItemData();
};

