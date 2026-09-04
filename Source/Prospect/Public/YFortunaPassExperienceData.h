#pragma once
#include "CoreMinimal.h"
#include "YFortunaPassExperienceData.generated.h"

USTRUCT(BlueprintType)
struct PROSPECT_API FYFortunaPassExperienceData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 playerLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 playerXp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 absoluteXpToNextLevel;
    
    FYFortunaPassExperienceData();
};

