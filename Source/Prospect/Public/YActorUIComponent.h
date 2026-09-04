#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "EYActivityType.h"
#include "EYMapMarkerType.h"
#include "EYUIComponentType.h"
#include "OnWidgetLoadedDelegate.h"
#include "YActorUIWidgetData.h"
#include "YActorUIComponent.generated.h"

class AActor;
class UObject;
class USceneComponent;
class UYActorUIComponent;
class UYActorWidget;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UYActorUIComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector m_offsetToActorLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D m_alignment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_maxRenderDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_overrideScaleDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_minRenderDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_minScaleValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_visibleThroughObstacles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EYUIComponentType m_componentType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_isEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_gameplayTemporaryDisabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_isSpawningActorAndShouldBeHidden;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* m_overridenSceneComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYActorUIWidgetData m_uiWidgetData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EYActivityType m_activityContext;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UYActorWidget> m_widgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UYActorWidget* m_widget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EYMapMarkerType m_markerType;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnWidgetLoaded BP_OnWidgetLoaded;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector m_worldWidgetLocation;
    
public:
    UYActorUIComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetWidgetData(const FYActorUIWidgetData& uiWidgetData);
    
    UFUNCTION(BlueprintCallable)
    void SetWidgetClass(TSoftClassPtr<UYActorWidget> uiClass);
    
    UFUNCTION(BlueprintCallable)
    void SetEnabled(bool IsEnabled);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnWidgetLoaded();
    
public:
    UFUNCTION(BlueprintCallable)
    UYActorWidget* GetWidget();
    
    UFUNCTION(BlueprintCallable)
    static void FindHelperUIComponentsWorld(UObject* Context, TArray<UYActorUIComponent*>& outHelperComponents);
    
    UFUNCTION(BlueprintCallable)
    static UYActorUIComponent* CreateActorUIComponent(AActor* Owner, FYActorUIWidgetData uiData, TSoftClassPtr<UYActorWidget> Widget);
    
};

