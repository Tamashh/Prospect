#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "YAIDebugFunctions.generated.h"

class AAIController;

UCLASS(Blueprintable)
class UYAIDebugFunctions : public UObject {
    GENERATED_BODY()
public:
    UYAIDebugFunctions();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetBlackboardState(AAIController* AIController);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetBehaviorInfoString(AAIController* AIController);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetActiveTreesInfo(AAIController* AIController);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetActiveTaskInfo(AAIController* AIController);

};
