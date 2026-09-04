#pragma once
#include "CoreMinimal.h"
#include "YPlayerSeasonGrant.generated.h"

USTRUCT(BlueprintType)
struct BACKENDMODELS_API FYPlayerSeasonGrant {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Level;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString grantRowId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString grantId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString seasonRowId;
    
    FYPlayerSeasonGrant();
};

