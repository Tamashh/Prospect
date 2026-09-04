#pragma once
#include "CoreMinimal.h"
#include "YWidget.h"
#include "YWidget_MatchResult.generated.h"

class UYWidget_EomResultHeader;

UCLASS(Blueprintable, EditInlineNew)
class UYWidget_MatchResult : public UYWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UYWidget_EomResultHeader* m_resultHeader;
    
    UYWidget_MatchResult();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_ViewedPlayerChanged();
    
};

