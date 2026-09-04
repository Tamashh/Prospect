#pragma once
#include "CoreMinimal.h"
#include "YSearchSocialProfiles.generated.h"

USTRUCT(BlueprintType)
struct FYSearchSocialProfiles {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Username;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 searchRequest;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool includePresence;
    
    BACKENDMODELS_API FYSearchSocialProfiles();
};

