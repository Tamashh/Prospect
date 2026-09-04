#pragma once
#include "CoreMinimal.h"
#include "YAIAllyAlertEvent.generated.h"

class AActor;
class AYAISquad;

USTRUCT(BlueprintType)
struct FYAIAllyAlertEvent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AYAISquad* m_aiSquad;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* m_target;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* m_characterAISensingTarget;
    
    PROSPECT_API FYAIAllyAlertEvent();
};

