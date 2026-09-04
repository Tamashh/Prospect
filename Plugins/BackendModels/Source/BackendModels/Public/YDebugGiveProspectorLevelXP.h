#pragma once
#include "CoreMinimal.h"
#include "YDebugGiveProspectorLevelXP.generated.h"

USTRUCT(BlueprintType)
struct FYDebugGiveProspectorLevelXP {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 xpIncrement;
    
    BACKENDMODELS_API FYDebugGiveProspectorLevelXP();
};

