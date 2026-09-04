#pragma once
#include "CoreMinimal.h"
#include "YMissionUpdateDataEntry.h"
#include "YSetMissionsCompleted.generated.h"

USTRUCT(BlueprintType)
struct BACKENDMODELS_API FYSetMissionsCompleted {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString UserId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FYMissionUpdateDataEntry> entries;
    
    FYSetMissionsCompleted();
};

