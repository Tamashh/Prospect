#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "YWidget.h"
#include "YOutpostFriendInfo.h"
#include "YWidget_OutpostSquadOverviewEntry.generated.h"

class UButton;
class UWidgetSwitcher;

UCLASS(Blueprintable, EditInlineNew)
class UYWidget_OutpostSquadOverviewEntry : public UYWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidgetSwitcher* m_stateWidgetSwitcher;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UButton* m_addMemberButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UButton* m_squadMemberButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYOutpostFriendInfo m_friendInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_isOwnPlayer;
    
public:
    UYWidget_OutpostSquadOverviewEntry();

protected:
    UFUNCTION(BlueprintCallable)
    void OnSocialRowChanged(FDataTableRowHandle rowHandle);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_NotifyPlayerBound(const FString& PlayerId);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_NotifyDataSetup(const FText& playerName);
    
};

