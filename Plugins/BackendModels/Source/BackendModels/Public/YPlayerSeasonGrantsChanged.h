#pragma once
#include "CoreMinimal.h"
#include "YPlayerSeasonGrant.h"
#include "YPlayerSeasonGrantsChanged.generated.h"

USTRUCT(BlueprintType)
struct FYPlayerSeasonGrantsChanged {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString seasonRowId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FYPlayerSeasonGrant> grants;
    
    BACKENDMODELS_API FYPlayerSeasonGrantsChanged();
};

