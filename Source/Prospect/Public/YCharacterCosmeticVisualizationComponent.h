#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Engine/DataTable.h"
#include "OnComponentCosmeticStateChangedDelegate.h"
#include "YInventoryItem.h"
#include "YPlayerCosmeticReplicatedData.h"
#include "YCharacterCosmeticVisualizationComponent.generated.h"

class AActor;
class UYSkeletalMeshComponentFOV;

UCLASS(Blueprintable, ClassGroup=Custom, Config=Game, meta=(BlueprintSpawnableComponent))
class UYCharacterCosmeticVisualizationComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UYSkeletalMeshComponentFOV* m_cosmeticSecondaryWeaponMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UYSkeletalMeshComponentFOV* m_cosmeticMeleeMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle m_equippedSecondaryWeapon;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnComponentCosmeticStateChanged OnCosmeticStateChangedDelegate;
    
    UYCharacterCosmeticVisualizationComponent(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void RefreshCosmeticVisualization();
    
    UFUNCTION(BlueprintCallable)
    void OnGearSetItemsAvaiable(const TArray<FYInventoryItem>& gearSetItems);
    
    UFUNCTION(BlueprintCallable)
    void OnFinishedLoadingMeleeMesh(int32 loadHandle) const;
    
    UFUNCTION(BlueprintCallable)
    void OnFinishedAsyncloadingCosmeticMesh(int32 Handle) const;
    
    UFUNCTION(BlueprintCallable)
    void OnCosmeticStateChanged(const FYPlayerCosmeticReplicatedData& oldData, const FYPlayerCosmeticReplicatedData& newData);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsCharacterComseticStateActive(AActor* relevantContext);
    
};

