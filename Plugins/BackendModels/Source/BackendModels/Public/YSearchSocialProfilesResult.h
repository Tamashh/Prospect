#pragma once
#include "CoreMinimal.h"
#include "EYSocialRequestResult.h"
#include "YSocialProfileEntry.h"
#include "YSearchSocialProfilesResult.generated.h"

USTRUCT(BlueprintType)
struct FYSearchSocialProfilesResult {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EYSocialRequestResult Result;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FYSocialProfileEntry> entries;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 searchRequest;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool includePresence;
    
    BACKENDMODELS_API FYSearchSocialProfilesResult();
};

