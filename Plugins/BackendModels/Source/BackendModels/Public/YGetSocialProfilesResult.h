#pragma once
#include "CoreMinimal.h"
#include "EYSocialRequestResult.h"
#include "YSocialProfileEntry.h"
#include "YGetSocialProfilesResult.generated.h"

USTRUCT(BlueprintType)
struct FYGetSocialProfilesResult {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EYSocialRequestResult Result;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FYSocialProfileEntry> entries;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool includePresence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 requestHandle;
    
    BACKENDMODELS_API FYGetSocialProfilesResult();
};

