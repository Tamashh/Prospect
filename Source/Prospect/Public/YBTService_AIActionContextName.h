#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTService.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "YBTService_AIActionContextName.generated.h"

UCLASS(Blueprintable)
class PROSPECT_API UYBTService_AIActionContextName : public UBTService {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector m_keyAIActionContextName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_aiContextActionName;
    
public:
    UYBTService_AIActionContextName();

};

