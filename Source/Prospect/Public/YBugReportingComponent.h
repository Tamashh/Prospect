#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "YBugReportingComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PROSPECT_API UYBugReportingComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UYBugReportingComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void RequestToeTrapBugReportInput();
    
    UFUNCTION(BlueprintCallable)
    void RequestBugReporter();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_RequestBugReporter();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnBugReportToeTrapRequest();
    
};

