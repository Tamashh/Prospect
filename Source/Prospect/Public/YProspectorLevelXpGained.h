#pragma once
#include "CoreMinimal.h"
#include "YBaseAnalyticsEvent.h"
#include "YProspectorLevelXpGained.generated.h"

USTRUCT(BlueprintType)
struct FYProspectorLevelXpGained : public FYBaseAnalyticsEvent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Amount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Source;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 prospector_level;
    
    PROSPECT_API FYProspectorLevelXpGained();
};

