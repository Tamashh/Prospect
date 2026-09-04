#pragma once
#include "CoreMinimal.h"
#include "YCurrentNextLevelData.generated.h"

USTRUCT(BlueprintType)
struct FYCurrentNextLevelData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 currentLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 currentLevelXp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 nextLevelXp;
    
    PROSPECT_API FYCurrentNextLevelData();
};

