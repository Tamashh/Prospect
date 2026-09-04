#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/Services/BTService_DefaultFocus.h"
#include "YBTService_GameplayFocus.generated.h"

UCLASS(Blueprintable)
class UYBTService_GameplayFocus : public UBTService_DefaultFocus {
    GENERATED_BODY()
public:
    UYBTService_GameplayFocus();

};

