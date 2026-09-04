#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "YWidget.h"
#include "YActorPlateWidgetCreationData.h"
#include "YConstantWidgetUpdateInterface.h"
#include "YWidgetActorPlateInitializationData.h"
#include "YWidget_ActorPlate.generated.h"

class AActor;
class UCanvasPanel;
class UYCharacterDBNOComponent;
class UYHealthComponent;
class UYPerkComponent;
class UYWidget_ActorPlate;

UCLASS(Blueprintable, EditInlineNew)
class UYWidget_ActorPlate : public UYWidget, public IYConstantWidgetUpdateInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCanvasPanel* m_offscreenRotationContainer;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYWidgetActorPlateInitializationData m_widgetPlateData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UYHealthComponent* m_healthComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UYCharacterDBNOComponent* m_dbnoComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UYPerkComponent* m_perkComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* m_associatedActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_healthRatio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_isWorldLocationProjectedOnScreen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_offscreenPositionEdgePercent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D m_leftAndUpperEdgePercent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D m_rightAndLowerEdgePercent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_distanceToPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_recentlyDamaged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_alwaysVisibleEvenOffScreen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_isInTeam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_isNPCActorPlate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_autoCleanUpOnZeroHealth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_hideOnZeroHealth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_forceNonVisibile;
    
public:
    UYWidget_ActorPlate();

    UFUNCTION(BlueprintCallable)
    void SetWidgetPlateData(const FYWidgetActorPlateInitializationData& Data);
    
    UFUNCTION(BlueprintCallable)
    void OnTeleported();
    
    UFUNCTION(BlueprintCallable)
    void OnPerksUpdated();
    
    UFUNCTION(BlueprintCallable)
    void OnHealthUpdated(float CurrentHealth, AActor* Instigator);
    
    UFUNCTION(BlueprintCallable)
    void EnableVisibility();
    
    UFUNCTION(BlueprintCallable)
    static UYWidget_ActorPlate* CreatePlateWidgetAndAddToViewport(AActor* Owner, const FYActorPlateWidgetCreationData& dataWidgetUpdate);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_WidgetPlateDataSet();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_UpdatePerks();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnRemoveWidget();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnIsOnScreenUpdated();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_InitializeFor();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_HandleDisplayedElements();
    

    // Fix for true pure virtual functions not being implemented
public:
    UFUNCTION()
    void Show() override PURE_VIRTUAL(Show,);
    
    UFUNCTION()
    bool ShouldWidgetBeKeptAlive() override PURE_VIRTUAL(ShouldWidgetBeKeptAlive, return false;);
    
    UFUNCTION()
    void OnRemoveWidget() override PURE_VIRTUAL(OnRemoveWidget,);
    
    UFUNCTION()
    void InitializeFor(AActor* Actor) override PURE_VIRTUAL(InitializeFor,);
    
    UFUNCTION()
    void Hide() override PURE_VIRTUAL(Hide,);
    
    UFUNCTION()
    void CalculateScore(float& outScore, bool& outForceShow) override PURE_VIRTUAL(CalculateScore,);
    
};

