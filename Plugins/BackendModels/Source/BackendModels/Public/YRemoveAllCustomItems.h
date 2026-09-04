#pragma once
#include "CoreMinimal.h"
#include "YRemoveAllCustomItems.generated.h"

USTRUCT(BlueprintType)
struct FYRemoveAllCustomItems {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString UserId;
    
    BACKENDMODELS_API FYRemoveAllCustomItems();
};

