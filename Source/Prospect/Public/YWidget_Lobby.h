#pragma once
#include "CoreMinimal.h"
#include "YWidget.h"
#include "YWidget_Lobby.generated.h"

class UTextBlock;
class UWidget;
class UWidgetSwitcher;

UCLASS(Blueprintable, EditInlineNew)
class UYWidget_Lobby : public UYWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidgetSwitcher* m_topInfoWidgetSwitcher;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* m_matchCountdownTextBlock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidget* m_countDownPanel;
    
public:
    UYWidget_Lobby();

private:
    UFUNCTION(BlueprintCallable)
    void OpenFactionSelection();
    
};

