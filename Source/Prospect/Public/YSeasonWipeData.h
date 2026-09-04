#pragma once
#include "CoreMinimal.h"
#include "YTimestamp.h"
#include "YSeasonWipeData.generated.h"

USTRUCT(BlueprintType)
struct PROSPECT_API FYSeasonWipeData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYTimestamp infoHighlightLastTimeChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 lastSeasonNumber;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool areRewardsQueued;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool forceShowingHighlight;
    
    FYSeasonWipeData();
};

