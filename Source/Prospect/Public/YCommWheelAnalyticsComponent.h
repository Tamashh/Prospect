#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Engine/DataTable.h"
#include "YSocialActorPlacedData.h"
#include "YCommWheelAnalyticsComponent.generated.h"

class APawn;
class UYCommWheelVOComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UYCommWheelAnalyticsComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UYCommWheelAnalyticsComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void OnSocialActorUse(FYSocialActorPlacedData Data);
    
    UFUNCTION(BlueprintCallable)
    void OnPawnSet(APawn* Pawn, APawn* newPawn);
    
    UFUNCTION(BlueprintCallable)
    void OnCommWheelUse(UYCommWheelVOComponent* commWheelUsed, FDataTableRowHandle commWheelEntry);
    
};

