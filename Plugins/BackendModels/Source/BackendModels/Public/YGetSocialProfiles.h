#pragma once
#include "CoreMinimal.h"
#include "YPlatformEntry.h"
#include "YGetSocialProfiles.generated.h"

USTRUCT(BlueprintType)
struct FYGetSocialProfiles {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FYPlatformEntry> entries;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool includePresence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString contextString;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 requestHandle;
    
    BACKENDMODELS_API FYGetSocialProfiles();
};

