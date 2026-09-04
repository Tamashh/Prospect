#pragma once
#include "CoreMinimal.h"
#include "YGetPlayerInventories.generated.h"

USTRUCT(BlueprintType)
struct FYGetPlayerInventories {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> userIds;
    
    BACKENDMODELS_API FYGetPlayerInventories();
};

