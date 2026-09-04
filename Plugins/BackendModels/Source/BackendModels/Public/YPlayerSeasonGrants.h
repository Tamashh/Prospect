#pragma once
#include "CoreMinimal.h"
#include "YPlayerSeasonGrant.h"
#include "YPlayerSeasonGrants.generated.h"

USTRUCT(BlueprintType)
struct BACKENDMODELS_API FYPlayerSeasonGrants {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString seasonRowId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FYPlayerSeasonGrant> grants;
    
    FYPlayerSeasonGrants();
};

