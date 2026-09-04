#pragma once
#include "CoreMinimal.h"
#include "YRelevantPlayerControllersData.generated.h"

class APawn;
class APlayerController;

USTRUCT(BlueprintType)
struct FYRelevantPlayerControllersData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APawn* m_pawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<APlayerController*> m_relevantPlayerControllers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_lastTimeProcessedTimeStamp;
    
    PROSPECT_API FYRelevantPlayerControllersData();
};

