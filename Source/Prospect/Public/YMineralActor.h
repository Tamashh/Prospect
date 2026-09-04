#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "Engine/DataTable.h"
#include "EYMineralTier.h"
#include "YMineralActor.generated.h"

class APlayerController;
class AYPickupActor;
class UMaterialInstanceDynamic;
class USceneComponent;
class UStaticMeshComponent;
class UYDestructibleMeshComponent;
class UYScannableComponent;

UCLASS(Blueprintable)
class PROSPECT_API AYMineralActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTransform> m_lootSpawnLocations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_LootSpawnedAt, meta=(AllowPrivateAccess=true))
    TArray<FVector> m_lootSpawnedAt;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FVector> m_lootLocationsDestroyed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    TArray<AYPickupActor*> m_spawnedLootActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_LootPickedUpAt, meta=(AllowPrivateAccess=true))
    TArray<FVector> m_lootPickedUpAt;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* m_sceneComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* m_rockMeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UYDestructibleMeshComponent* m_destructibleMeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UYScannableComponent* m_scanComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_MineralVariationRowHandle, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle m_mineralVariationRowHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UMaterialInstanceDynamic*> m_dynamicMaterials;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AYPickupActor*> m_discoveredLootActorsByLocalPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString m_materialParameterName;
    
    AYMineralActor(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void TrySetupDynamicMaterialInstances();
    
    UFUNCTION(BlueprintCallable)
    void TryCrumbleMineral();
    
    UFUNCTION(BlueprintCallable)
    void SetupMineral(FDataTableRowHandle rowHandle, EYMineralTier lootTier);
    
    UFUNCTION(BlueprintCallable)
    void OnRowLoaded();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_MineralVariationRowHandle();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_LootSpawnedAt();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_LootPickedUpAt();
    
    UFUNCTION(BlueprintCallable)
    void OnLootActorDestroyed(AActor* DestroyedActor);
    
    UFUNCTION(BlueprintCallable)
    void DoLootDiscoveryCheck(APlayerController* Player);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnCrumble();
    
};

