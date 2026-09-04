#pragma once
#include "CoreMinimal.h"
#include "YShowItems.generated.h"

USTRUCT(BlueprintType)
struct FYShowItems {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString UserId;
    
    BACKENDMODELS_API FYShowItems();
};

