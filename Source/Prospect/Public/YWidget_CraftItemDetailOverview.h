#pragma once
#include "CoreMinimal.h"
#include "YWidget.h"
#include "YInputStackInterface.h"
#include "YWidget_CraftItemDetailOverview.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UYWidget_CraftItemDetailOverview : public UYWidget, public IYInputStackInterface {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnBackButtonClickedSignature);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnBackButtonClickedSignature OnBackButtonClicked;
    
    UYWidget_CraftItemDetailOverview();

    UFUNCTION(BlueprintCallable)
    void HandleBackButtonWidgetClicked();
    

    // Fix for true pure virtual functions not being implemented
};

