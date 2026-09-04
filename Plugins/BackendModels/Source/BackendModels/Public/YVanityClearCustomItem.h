#pragma once
#include "CoreMinimal.h"
#include "YVanityClearCustomItem.generated.h"

USTRUCT(BlueprintType)
struct FYVanityClearCustomItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString UserId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString custom_id;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 slotId;
    
    BACKENDMODELS_API FYVanityClearCustomItem();
};

