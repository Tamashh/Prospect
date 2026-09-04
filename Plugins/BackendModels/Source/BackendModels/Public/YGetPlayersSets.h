#pragma once
#include "CoreMinimal.h"
#include "YGetPlayersSets.generated.h"

USTRUCT(BlueprintType)
struct FYGetPlayersSets {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> userIds;
    
    BACKENDMODELS_API FYGetPlayersSets();
};

