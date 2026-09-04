#pragma once
#include "CoreMinimal.h"
#include "Navigation/PathFollowingComponent.h"
#include "Navigation/PathFollowingComponent.h"
#include "YPathFollowingComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PROSPECT_API UYPathFollowingComponent : public UPathFollowingComponent {
    GENERATED_BODY()
public:
    UYPathFollowingComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    TEnumAsByte<EPathFollowingResult::Type> GetLatestPathFollowingResult();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetDebugInfoAboutLatestPathFollowingResult(FString& outInfoString);
    
};

