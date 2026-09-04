#pragma once
#include "CoreMinimal.h"
#include "YRemoveCustomItem.generated.h"

USTRUCT(BlueprintType)
struct FYRemoveCustomItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString UserId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ItemId;
    
    BACKENDMODELS_API FYRemoveCustomItem();
};

