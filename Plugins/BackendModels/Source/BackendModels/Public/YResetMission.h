#pragma once
#include "CoreMinimal.h"
#include "YResetMission.generated.h"

USTRUCT(BlueprintType)
struct BACKENDMODELS_API FYResetMission {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString missionArcId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString missionId;
    
    FYResetMission();
};

