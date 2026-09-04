#pragma once
#include "CoreMinimal.h"
#include "YWidget.h"
#include "YWidget_StatusPage.generated.h"

UCLASS(Blueprintable, EditInlineNew, Config=Game)
class PROSPECT_API UYWidget_StatusPage : public UYWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString m_statusPageURL;
    
    UYWidget_StatusPage();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Refresh();
    
};

