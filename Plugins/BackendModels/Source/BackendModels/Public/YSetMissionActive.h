#pragma once
#include "CoreMinimal.h"
#include "YSetMissionActive.generated.h"

USTRUCT(BlueprintType)
struct BACKENDMODELS_API FYSetMissionActive {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString UserId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString missionArcId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString missionId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool newState;
    
    FYSetMissionActive();
};

