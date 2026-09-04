#pragma once
#include "CoreMinimal.h"
#include "YWidget.h"
#include "YWidget_ButtonExitToStation.generated.h"

class UButton;

UCLASS(Blueprintable, EditInlineNew)
class UYWidget_ButtonExitToStation : public UYWidget {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnButtonClicked);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnButtonClicked OnButtonClicked;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UButton* m_button;
    
public:
    UYWidget_ButtonExitToStation();

    UFUNCTION(BlueprintCallable)
    void HandleButtonClicked();
    
};

