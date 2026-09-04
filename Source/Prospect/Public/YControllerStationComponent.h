#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Engine/DataTable.h"
#include "EYInputUIStackType.h"
#include "YOnCurrentNPCHandleSetSignatureDelegate.h"
#include "YOnFactionShopOpenedDelegate.h"
#include "YOnShopTabTypeOpenedDelegate.h"
#include "YSceneSetupData.h"
#include "YToggleQuickMenuVisibilityDelegate.h"
#include "YToggleStationFortunaPassDelegate.h"
#include "YToggleStationHudVisibilityDelegate.h"
#include "YToggleStationInventoryDelegate.h"
#include "YToggleStationObjectiveListDelegate.h"
#include "YToggleStationShopDelegate.h"
#include "YControllerStationComponent.generated.h"

class AActor;
class UYControllerStationComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PROSPECT_API UYControllerStationComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYOnCurrentNPCHandleSetSignature OnCurrentNPCHandleSet;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYToggleStationHudVisibility OnToggleHudVisibility;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYToggleQuickMenuVisibility OnToggleQuickMenuVisibility;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYToggleStationInventory OnToggleStationInventory;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYToggleStationFortunaPass OnToggleStationFortunaPass;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYToggleStationShop OnToggleStationShop;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYToggleStationObjectiveList OnToggleStationObjectiveList;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYOnShopTabTypeOpened OnShopTabTypeOpened;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYOnFactionShopOpened OnFactionShopOpened;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_currentNPCHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYSceneSetupData m_shopSetupData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYSceneSetupData m_fortunaPassSetupData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYSceneSetupData m_playSetupData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYSceneSetupData m_factionICASetupData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYSceneSetupData m_factionKorolevSetupData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYSceneSetupData m_factionOsirisSetupData;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_onLeftSubMenuFromQuickMenuFadeOutDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_onLeftSubMenuFromQuickMenuFadeInDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_onLeftSubMenuFromQuickMenuFadeInDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYSceneSetupData m_loadoutSetupData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* m_currentNPCActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle m_requestedScene;
    
public:
    UYControllerStationComponent(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void TryFadeFromBlackAfterSubMenuLeftFromQuickMenu();
    
public:
    UFUNCTION(BlueprintCallable)
    void ToggleStationShop();
    
    UFUNCTION(BlueprintCallable)
    void ToggleStationObjectiveList();
    
    UFUNCTION(BlueprintCallable)
    void ToggleStationInventory();
    
    UFUNCTION(BlueprintCallable)
    void ToggleStationHUD();
    
    UFUNCTION(BlueprintCallable)
    void ToggleStationFortunaPass();
    
    UFUNCTION(BlueprintCallable)
    void SetRequestedSceneRowHandle(const FDataTableRowHandle& requestedScene);
    
    UFUNCTION(BlueprintCallable)
    void OnStackChanged(EYInputUIStackType stackType, bool Visible);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetRequestedSceneRowHandle(FDataTableRowHandle& requestedScene) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UYControllerStationComponent* FindControllerStationComponentChecked(AActor* actorContext);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UYControllerStationComponent* FindControllerStationComponent(AActor* actorContext);
    
    UFUNCTION(BlueprintCallable)
    static void ExecuteNPCCameraTransition(AActor* actorContext, AActor* npcActor, FDataTableRowHandle rowHandle);
    
};

