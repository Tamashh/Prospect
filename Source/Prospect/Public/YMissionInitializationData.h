#pragma once
#include "CoreMinimal.h"
#include "YMissionInitializationData.generated.h"

class UYOnboardingPlayerInstanceComponent;

USTRUCT(BlueprintType)
struct FYMissionInitializationData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText m_missionStepDescription;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText m_missionStepNpcText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UYOnboardingPlayerInstanceComponent* m_metaQuestInstanceComponent;
    
    PROSPECT_API FYMissionInitializationData();
};

