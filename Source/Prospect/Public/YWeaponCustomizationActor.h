#pragma once
#include "CoreMinimal.h"
#include "EYVanityType.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "Engine/DataTable.h"
#include "EYCustomizationMode.h"
#include "YCustomizationVisualizationState.h"
#include "YInventoryItem.h"
#include "YWeaponCustomizationActor.generated.h"

class UDataTable;
class UMaterialInstance;
class USceneComponent;
class UYCustomizationCameraComponent;
class UYSkeletalMeshComponentFOV;

UCLASS(Blueprintable)
class AYWeaponCustomizationActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UYSkeletalMeshComponentFOV* m_skeletalMeshComponentFOV;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* m_rootComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* m_sceneBase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* m_sceneRotationComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UYCustomizationCameraComponent* m_customizationCameraComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYCustomizationVisualizationState m_visualizationState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle m_weaponPreviewEditorOnly;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle m_vanityPreviewEditorOnly;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UDataTable* m_CameraDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle m_charmCameraRowHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString m_charmSocketName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_currentFactionId;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EYVanityType m_currentVanityType;
    
public:
    AYWeaponCustomizationActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    UMaterialInstance* RetrieveMaterialWithOverrideParameters() const;
    
    UFUNCTION(BlueprintCallable)
    void OverrideCurrentVanityDisplay(EYVanityType vanityType);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnWorldLocationChanged(const FTransform& WorldLocation);
    
    UFUNCTION(BlueprintCallable)
    void OnToggleQuickMenuVisibility(bool isQuickMenuVisible);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnSelectedNewWeapon(const FString& weaponId, const FString& customWeaponID);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRequestTemporaryVisualizationUpdate(FDataTableRowHandle selectedVanityRowHandle, bool shouldShow, bool overrideOtherVanity);
    
    UFUNCTION(BlueprintCallable)
    void OnInspectedInventoryItemUpdatedCallback(FYInventoryItem inventoryItem);
    
    UFUNCTION(BlueprintCallable)
    void OnFinishedLoadingWeapon(FYCustomizationVisualizationState visualizationState);
    
    UFUNCTION(BlueprintCallable)
    void OnFactionSet(const FName& factionId);
    
    UFUNCTION(BlueprintCallable)
    void OnCustomizationModeChanged(EYCustomizationMode Mode);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_SetRotation(const FVector& rotationPivot, const EYVanityType vanityType);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnWeaponChanged();
    
};

