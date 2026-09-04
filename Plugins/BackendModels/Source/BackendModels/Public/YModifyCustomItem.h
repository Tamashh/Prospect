#pragma once
#include "CoreMinimal.h"
#include "YCustomItemInfo.h"
#include "YModifyCustomItem.generated.h"

USTRUCT(BlueprintType)
struct FYModifyCustomItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString UserId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYCustomItemInfo itemToUpdate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString modIdUsed;
    
    BACKENDMODELS_API FYModifyCustomItem();
};

