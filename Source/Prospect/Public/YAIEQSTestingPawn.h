#pragma once
#include "CoreMinimal.h"
#include "EnvironmentQuery/EQSTestingPawn.h"
#include "YAIEQSTestingPawn.generated.h"

UCLASS(Blueprintable)
class PROSPECT_API AYAIEQSTestingPawn : public AEQSTestingPawn {
    GENERATED_BODY()
public:
    AYAIEQSTestingPawn(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void RunEQSQueryNow();
    
};

