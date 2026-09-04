#pragma once
#include "CoreMinimal.h"
#include "YWidget.h"
#include "YActorUIWidgetData.h"
#include "YActorWidget.generated.h"

class AActor;
class UCanvasPanel;
class UYActorWidgetController;

UCLASS(Blueprintable, EditInlineNew)
class UYActorWidget : public UYWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCanvasPanel* m_offscreenCanvasPanel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCanvasPanel* m_offscreenRotationContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_offScreenArrowEnabled;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UYActorWidgetController* m_actorWidgetController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* m_actor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYActorUIWidgetData m_widgetData;
    
public:
    UYActorWidget();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_SetWidgetData(FYActorUIWidgetData widgetData);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnActorSet();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OffScreenUpdate(bool OffScreen);
    
};

