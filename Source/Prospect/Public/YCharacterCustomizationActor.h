#pragma once
#include "CoreMinimal.h"
#include "EYCustomizationCategory.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Character.h"
#include "Engine/DataTable.h"
#include "EYCharacterVanityResetRequest.h"
#include "EYEquipedWeaponPoseType.h"
#include "YActiveCustomizationData.h"
#include "YCharacterCustomizationActorActiveVisualizationEntry.h"
#include "YCharacterCustomizationBodyPart.h"
#include "YCharacterCustomizationRowBase.h"
#include "YCustomizationActorInterface.h"
#include "YResourceExecutionInterface.h"
#include "YShowBodyTypeCategoryUpdateData.h"
#include "YCharacterCustomizationActor.generated.h"

class AActor;
class APlayerState;
class AYCharacterCustomizationActor;
class UAnimMontage;
class USkeletalMesh;
class UYCameraInteractionComponent;
class UYCustomizationCameraComponent;

UCLASS(Blueprintable)
class AYCharacterCustomizationActor : public ACharacter, public IYCustomizationActorInterface, public IYResourceExecutionInterface {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnCharacterCustomizationLoadedSignature);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UYCameraInteractionComponent* m_interactionComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UYCustomizationCameraComponent* m_customizationCameraComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FYCharacterCustomizationActorActiveVisualizationEntry> m_activeVisualizedCustomizationEntries;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle m_equippedWeaponHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FDataTableRowHandle> m_equippedVanityHandles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AYCharacterCustomizationActor*> m_childCustomizationActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_clearMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_reactToGLobalVanityUpdates;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_attachToLocalPlayerAtStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_useMeshMerging;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_shouldSkelMeshComponentsSyncAttachParrentLOD;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USkeletalMesh*> m_meshToUseForMeshMerging;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EYCustomizationCategory> m_visualizationCategoriesToDisable;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_usingParentMeshForAttachments;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* m_explicitCustomizationActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* m_playerCharacterCustomizationActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bindToPlayerStateData;
    
public:
    AYCharacterCustomizationActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetPlayerStateData(APlayerState* playerStateData);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetCategoryVisualized(EYCustomizationCategory Category);
    
public:
    UFUNCTION(BlueprintCallable)
    void RefreshActiveCustomizationData(FYActiveCustomizationData oldData, FYActiveCustomizationData customizationData, bool ForceRefresh);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnWorldLocationChanged(FTransform worldOffsetLocation);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnOnCustomizationCategoryChanged(EYCustomizationCategory newCategory);
    
    UFUNCTION(BlueprintCallable)
    void OnInitializeEquippedWeapon(FDataTableRowHandle desiredRowHandle, TArray<FDataTableRowHandle> vanityEntries);
    
    UFUNCTION(BlueprintCallable)
    void OnGlobalVanityUpdated();
    
    UFUNCTION(BlueprintCallable)
    void OnFinishedAsyncLoading(FYCharacterCustomizationBodyPart bodyPart);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnCategoryClickedCallback(EYCustomizationCategory Category) const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void LogDebugSelfInfo(const FString& Context) const;
    
    UFUNCTION(BlueprintCallable)
    void HandlePlayerStateSet();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_SetWeaponAnimationPose(EYEquipedWeaponPoseType pose);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_SetPlayerState(APlayerState* playerStateData);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_SetEmote(const FYCharacterCustomizationRowBase& deathEmoteRowBase);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_SetDeathEmote(const FYCharacterCustomizationRowBase& deathEmoteRowBase);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_PlayCustomizationMontage(UAnimMontage* Montage, EYCustomizationCategory Category);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnShowCustomizationCategory(FYShowBodyTypeCategoryUpdateData customizationCategory);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnResetRequest(EYCharacterVanityResetRequest resetRequest);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnEOMMapLoaded();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnActiveCustomizationDataChanged(FYActiveCustomizationData newCustomizationData);
    

    // Fix for true pure virtual functions not being implemented
};

