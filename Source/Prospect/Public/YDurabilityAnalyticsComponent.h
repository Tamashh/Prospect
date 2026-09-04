#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GameFramework/OnlineReplStructs.h"
#include "YActiveArmorData.h"
#include "YDurabilityAnalyticsPerPlayer.h"
#include "YDurabilityAnalyticsComponent.generated.h"

class APawn;
class UYArmorComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PROSPECT_API UYDurabilityAnalyticsComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FUniqueNetIdRepl, FYDurabilityAnalyticsPerPlayer> m_dataPerPlayer;
    
public:
    UYDurabilityAnalyticsComponent(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void OnPlayerCharacterSet(APawn* oldPawn, APawn* newPawn);
    
    UFUNCTION(BlueprintCallable)
    void HandleOnArmorDurabilityUpdated(UYArmorComponent* armorComponent, const FYActiveArmorData& armor, int32 previousDurability);
    
    UFUNCTION(BlueprintCallable)
    void HandleOnArmorAddedOrRemoved(UYArmorComponent* armorComponent);
    
};

