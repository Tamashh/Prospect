#pragma once
#include "CoreMinimal.h"
#include "YWidget.h"
#include "YWidget_Popup_BeforeMatch_Warning.generated.h"

UCLASS(Blueprintable, EditInlineNew, Config=Game)
class PROSPECT_API UYWidget_Popup_BeforeMatch_Warning : public UYWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_configShouldSkipBeforeMatchWarning;
    
    UYWidget_Popup_BeforeMatch_Warning();

    UFUNCTION(BlueprintCallable)
    void SavePrefToConfig();
    
};

