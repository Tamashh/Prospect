#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EYMapType.h"
#include "YMapInfoComponent.generated.h"

class UObject;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PROSPECT_API UYMapInfoComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UYMapInfoComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    EYMapType GetMapType(const FString& contextString) const;
    
    UFUNCTION(BlueprintCallable)
    static EYMapType FindMapType(UObject* contextObject, const FString& contextString);
    
};

