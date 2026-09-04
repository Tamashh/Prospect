#pragma once
#include "CoreMinimal.h"
#include "YWidget.h"
#include "YWidget_SpectatorHUD.generated.h"

class UTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class UYWidget_SpectatorHUD : public UYWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_timeBeforeExitToStationEnables;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* m_spectatingReasonText;
    
public:
    UYWidget_SpectatorHUD();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_ShowSpectatingReasonText(const FText& killedBy, const FText& killedWith, const bool Died);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_SetSpectatedPlayerName(const FString& playerName);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_SetSpectatedPlayerHUDVisibility(bool Visible);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnToggleDeathRecap();
    
};

