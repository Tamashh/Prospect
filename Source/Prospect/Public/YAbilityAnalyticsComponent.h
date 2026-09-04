#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Engine/DataTable.h"
#include "YAbilityAnalyticsPerPlayer.h"
#include "YInventoryItem.h"
#include "YAbilityAnalyticsComponent.generated.h"

class AActor;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PROSPECT_API UYAbilityAnalyticsComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FYAbilityAnalyticsPerPlayer> m_abilityPerPlayerAnalytics;
    
public:
    UYAbilityAnalyticsComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SendDropAbilityData(AActor* playerControllerActor, const FDataTableRowHandle& abilityRowHandle);
    
    UFUNCTION(BlueprintCallable)
    void OnAbilityUsed(const AActor* PlayerController, const FYInventoryItem& inventoryItem);
    
    UFUNCTION(BlueprintCallable)
    void OnAbilityEquipped(const AActor* PlayerController, const FYInventoryItem& inventoryItem);
    
};

