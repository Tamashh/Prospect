#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "Templates/SubclassOf.h"
#include "YUiManager.generated.h"

class UUserWidget;
class UYUiManager;

UCLASS(Blueprintable)
class UYUiManager : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUserWidget* m_itemTooltipWidget;
    
public:
    UYUiManager();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UYUiManager* FindUiManager(const UObject* objCtx);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UUserWidget* CreateOrGetItemTooltipWidget(TSubclassOf<UUserWidget> tooltipClass);
    
private:
    UFUNCTION(BlueprintCallable)
    void ClearCachedWidget();
    
};

