#pragma once
#include "CoreMinimal.h"
#include "YSetMissionAcknowledged.generated.h"

USTRUCT(BlueprintType)
struct BACKENDMODELS_API FYSetMissionAcknowledged {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString missionArcId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString missionId;
    
    FYSetMissionAcknowledged();
};

