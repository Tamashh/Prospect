#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/Services/BTService_BlackboardBase.h"
#include "YBTService_BoolGuard.generated.h"

UCLASS(Blueprintable)
class UYBTService_BoolGuard : public UBTService_BlackboardBase {
    GENERATED_BODY()
public:
    UYBTService_BoolGuard();

};

