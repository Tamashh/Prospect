#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EYWheelType.h"
#include "YFunctionsUsedAnalyticsComponent.generated.h"

class APawn;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PROSPECT_API UYFunctionsUsedAnalyticsComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 m_toolWheelUsedCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 m_mapUsedCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 m_commWheelUsedCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 m_sprintUsedCount;
    
public:
    UYFunctionsUsedAnalyticsComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void OnToolWheelUsedCallback(EYWheelType wheelType);
    
    UFUNCTION(BlueprintCallable)
    void OnSprintUsedCallback();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnControllerPawnChanged(APawn* oldPawn, APawn* newPawn);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnCommWheelUsedCallback(EYWheelType wheelType);
    
};

