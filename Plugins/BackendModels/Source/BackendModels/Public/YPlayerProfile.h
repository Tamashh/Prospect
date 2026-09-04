#pragma once
#include "CoreMinimal.h"
#include "YPlayerProfile.generated.h"

USTRUCT(BlueprintType)
struct FYPlayerProfile {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString internalUserId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString rowId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 prospectorLevelXP;
    
    BACKENDMODELS_API FYPlayerProfile();
};

