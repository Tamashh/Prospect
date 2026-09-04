#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Engine/DataTable.h"
#include "GameFramework/OnlineReplStructs.h"
#include "YAmmoUpdateInfo.h"
#include "YDealtDamageData.h"
#include "YStoredInventoryWeaponData.h"
#include "YWeaponAnalyticsPerPlayer.h"
#include "YWeaponAnalyticsComponent.generated.h"

class AActor;
class APawn;
class UYWeaponPlayerControllerRuntimeComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PROSPECT_API UYWeaponAnalyticsComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FUniqueNetIdRepl, FYWeaponAnalyticsPerPlayer> m_weaponAnalyticsPerPlayer;
    
public:
    UYWeaponAnalyticsComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SendDropWeaponData(AActor* playerControllerActor, const FYStoredInventoryWeaponData& storedInformation);
    
    UFUNCTION(BlueprintCallable)
    void OnWeaponFired(UYWeaponPlayerControllerRuntimeComponent* weaponPlayerControllerRuntimeComponent);
    
    UFUNCTION(BlueprintCallable)
    void OnWeaponAcquired(AActor* actorContext, const FYStoredInventoryWeaponData& storedData);
    
    UFUNCTION(BlueprintCallable)
    void OnPlayerCharacterSet(APawn* oldPawn, APawn* newPawn);
    
    UFUNCTION(BlueprintCallable)
    void OnDamageDealt(const FYDealtDamageData& damageDealt);
    
    UFUNCTION(BlueprintCallable)
    void OnAmmoChanged(const FYAmmoUpdateInfo& ammoInfo);
    
    UFUNCTION(BlueprintCallable)
    void OnActiveWeaponModsChanged(UYWeaponPlayerControllerRuntimeComponent* weaponPlayerControllerRuntimeComponent);
    
    UFUNCTION(BlueprintCallable)
    void OnActiveWeaponChanged(UYWeaponPlayerControllerRuntimeComponent* weaponPlayerControllerRuntimeComponent, FDataTableRowHandle newRow);
    
};

