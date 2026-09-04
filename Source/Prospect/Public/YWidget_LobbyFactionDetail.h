#pragma once
#include "CoreMinimal.h"
#include "YFactionProgress.h"
#include "YWidget.h"
#include "YFactionsDataTableRow.h"
#include "YWidget_LobbyFactionDetail.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UYWidget_LobbyFactionDetail : public UYWidget {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnFactionSelected, const FName&, factionId);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnFactionSelected OnFactionSelected;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYFactionsDataTableRow m_factionData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYFactionProgress m_factionProgress;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_pointsForNextLevel;
    
public:
    UYWidget_LobbyFactionDetail();

protected:
    UFUNCTION(BlueprintCallable)
    void OnButtonClicked();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnFactionSelected(const FName& factionId);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintImplementableEvent)
    void BP_OnFactionProgressUpdated(FYFactionProgress factionProgress, int32 pointsForNextLevel);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnFactionDataSet(const FYFactionsDataTableRow& Data);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_IsSelected(bool IsSelected);
    
};

