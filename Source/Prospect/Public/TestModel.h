#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "TestModel.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UTestModel : public UActorComponent {
    GENERATED_BODY()
public:
    UTestModel(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    FString GetSomeData();
    
};

