#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/HUD.h"
#include "EYMapMarkerType.h"
#include "EYNotificationPlacement.h"
#include "EYNotificationType.h"
#include "OnHudBegunPlayDelegateDelegate.h"
#include "Templates/SubclassOf.h"
#include "YInteractionUpdateData.h"
#include "YPlayerInteraction.h"
#include "YHUD.generated.h"

class AActor;
class UYDialogContainerBase;
class UYHierarchicalStateBase;
class UYLevelActorContainer;
class UYProgressDisplayComponent;
class UYScreenBase;
class UYScreenSystemRoot;
class UYWidget;
class UYWidgetProvider;
class UYWidgetRootContainer;
class UYWidgetUpdater;

UCLASS(Blueprintable, NonTransient)
class AYHUD : public AHUD {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UYWidget> m_loadingIndicatorWBPClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UYProgressDisplayComponent* m_progressDisplayComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnHudBegunPlayDelegate OnHudBegunPlay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UYWidgetUpdater* m_widgetUpdater;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UYScreenSystemRoot* m_screenSystemRoot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UYScreenBase> m_startScreenClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UYHierarchicalStateBase> m_escStateClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UYWidgetRootContainer> m_mainContainerClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UYLevelActorContainer> m_levelActorContainerClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UYDialogContainerBase> m_dialogContainerClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UYWidget* m_loadingIndicator;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UYWidgetRootContainer* m_mainContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UYWidgetProvider*> m_widgetProviders;
    
public:
    AYHUD(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void UnregisterWidgetProvider(UYWidgetProvider* provider);
    
    UFUNCTION(BlueprintCallable)
    void ToggleHud();
    
    UFUNCTION(BlueprintCallable)
    void ToggleEscMenuNow(bool forced);
    
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleEscMenu();
    
    UFUNCTION(BlueprintCallable)
    void ToggleChatInput();
    
    UFUNCTION(BlueprintCallable)
    UYWidgetProvider* RequestWidgetProvider(TSubclassOf<UYWidgetProvider> providerClass, const FString& callerContext);
    
    UFUNCTION(BlueprintCallable)
    void RequestNotification(const FText& notificationText, FVector colorOverride, float Duration, EYNotificationType notificationType, EYNotificationPlacement notificationImportance);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static void RemoveFilterForMapMarkerType(AActor* actorContext, EYMapMarkerType typeToFilter);
    
    UFUNCTION(BlueprintCallable)
    void ReleaseWidgetProvider(TSubclassOf<UYWidgetProvider> providerClass);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnInteractionUpdated(const FYInteractionUpdateData& interactionData);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnInteractionDetected(const FYPlayerInteraction& interactionData, bool detected);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsHUDVisible();
    
    UFUNCTION(BlueprintCallable)
    TArray<EYMapMarkerType> GetActiveMarkerFilters();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnHUDVisibilityChanged();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static void AddFilterForMapMarkerType(AActor* actorContext, EYMapMarkerType typeToFilter);
    
private:
    UFUNCTION(BlueprintCallable)
    void ActivateInputForUmg(UYWidget* focusedWidget, const FString& contextString, bool isActivated, bool uiOnly);
    
};

