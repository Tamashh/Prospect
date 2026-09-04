#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "YWidgetUpdateInitializeData.h"
#include "YWidgetUpdater.generated.h"

class AYHUD;
class UUserWidget;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UYWidgetUpdater : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UUserWidget*> m_pendingAddToUIBackgroundWidgets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UUserWidget*> m_widgets;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UUserWidget*> m_previousFrameShownWidgets;
    
    UYWidgetUpdater(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    static void RemoveWidgetFromUpdater(UUserWidget* Widget);
    
protected:
    UFUNCTION(BlueprintCallable)
    void RegisterPendingAddToUIBackgroundWidgets(AYHUD* HUD);
    
public:
    UFUNCTION(BlueprintCallable)
    static UUserWidget* CreateConstantUpdateWidgetAndAddToViewport(const FYWidgetUpdateInitializeData& Data);
    
};

