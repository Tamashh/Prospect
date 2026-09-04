#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/Tasks/BTTask_RotateToFaceBBEntry.h"
#include "YBTTask_AimTurretAtBBEntry.generated.h"

UCLASS(Blueprintable)
class PROSPECT_API UYBTTask_AimTurretAtBBEntry : public UBTTask_RotateToFaceBBEntry {
    GENERATED_BODY()
public:
    UYBTTask_AimTurretAtBBEntry();

};

