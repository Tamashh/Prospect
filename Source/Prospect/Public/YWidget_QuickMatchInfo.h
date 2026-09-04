#pragma once
#include "CoreMinimal.h"
#include "YWidget.h"
#include "YWidget_QuickMatchInfo.generated.h"

class UYWidget_MatchResult;

UCLASS(Blueprintable, EditInlineNew)
class UYWidget_QuickMatchInfo : public UYWidget {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FYOnQuickMatchInfoToggled);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYOnQuickMatchInfoToggled OnQuickMatchInfoToggled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UYWidget_MatchResult* m_matchResults;
    
    UYWidget_QuickMatchInfo();

    UFUNCTION(BlueprintCallable)
    void ToggleQuickMatchInfoByStationMapInput();
    
    UFUNCTION(BlueprintCallable)
    void ToggleQuickMatchInfoByMapInput();
    
    UFUNCTION(BlueprintCallable)
    void ToggleQuickMatchInfo(const FString& Context);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnToggled();
    
};

