#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "YAIRoamingComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PROSPECT_API UYAIRoamingComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UYAIRoamingComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    FVector GetRoamingLocation();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    FString GetDebugDescription();

};
