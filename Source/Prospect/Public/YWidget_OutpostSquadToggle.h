#pragma once
#include "CoreMinimal.h"
#include "YWidget.h"
#include "YOutpostFriendInfo.h"
#include "YWidget_OutpostSquadToggle.generated.h"

class UYWidget_OutpostSquadOverviewEntry;

UCLASS(Blueprintable, EditInlineNew)
class UYWidget_OutpostSquadToggle : public UYWidget {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnSquadToggleClicked);
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UYWidget_OutpostSquadOverviewEntry* m_memberEntry_Self;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UYWidget_OutpostSquadOverviewEntry* m_memberEntry1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UYWidget_OutpostSquadOverviewEntry* m_memberEntry2;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSquadToggleClicked OnSquadToggleClicked;
    
public:
    UYWidget_OutpostSquadToggle();

protected:
    UFUNCTION(BlueprintCallable)
    void LeaveSquad();
    
private:
    UFUNCTION(BlueprintCallable)
    void HandleSquadMemberClicked();
    
    UFUNCTION(BlueprintCallable)
    void HandleSquadInfoUpdated(const TArray<FYOutpostFriendInfo>& squadInfos);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_SquadUpdate(bool IsInSquad);
    
};

