#pragma once
#include "CoreMinimal.h"
#include "YWidget.h"
#include "YWidget_FullScreenCrosshairManager.generated.h"

class APawn;
class UCanvasPanel;
class UYWeaponPlayerControllerRuntimeComponent;
class UYWidget_FullScreenCrosshair;

UCLASS(Blueprintable, EditInlineNew)
class UYWidget_FullScreenCrosshairManager : public UYWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UYWidget_FullScreenCrosshair* m_fullscreenCrosshairWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCanvasPanel* m_fullscreenCrosshairPanel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UYWeaponPlayerControllerRuntimeComponent* m_weaponPlayerRuntimeComponent;
    
public:
    UYWidget_FullScreenCrosshairManager();

protected:
    UFUNCTION(BlueprintCallable)
    void OnTargetingStopped(bool wasInterupted);
    
    UFUNCTION(BlueprintCallable)
    void OnStartedTargeting();
    
    UFUNCTION(BlueprintCallable)
    void OnReticleToggleChangedCallback(bool newState);
    
    UFUNCTION(BlueprintCallable)
    void OnPawnStateChanged(APawn* oldPawn, APawn* newPawn);
    
    UFUNCTION(BlueprintCallable)
    void OnNewWeaponInitialized();
    
};

