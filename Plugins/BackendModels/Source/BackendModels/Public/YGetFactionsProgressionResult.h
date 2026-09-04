#pragma once
#include "CoreMinimal.h"
#include "YPlayerFactionProgressData.h"
#include "YGetFactionsProgressionResult.generated.h"

USTRUCT(BlueprintType)
struct FYGetFactionsProgressionResult {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FYPlayerFactionProgressData> factions;
    
    BACKENDMODELS_API FYGetFactionsProgressionResult();
};

