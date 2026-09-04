#pragma once
#include "CoreMinimal.h"
#include "YLoreBackendItemInfo.generated.h"

USTRUCT(BlueprintType)
struct BACKENDMODELS_API FYLoreBackendItemInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString loreItemId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Amount;
    
    FYLoreBackendItemInfo();
};

