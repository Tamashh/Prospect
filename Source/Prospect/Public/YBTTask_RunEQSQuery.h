#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/Tasks/BTTask_RunEQSQuery.h"
#include "YBTTask_RunEQSQuery.generated.h"

UCLASS(Blueprintable)
class PROSPECT_API UYBTTask_RunEQSQuery : public UBTTask_RunEQSQuery {
    GENERATED_BODY()
public:
    UYBTTask_RunEQSQuery();

};

