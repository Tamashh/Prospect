#pragma once
#include "CoreMinimal.h"
#include "YWidget.h"
#include "YOutpostFriendInfo.h"
#include "YWidget_SocialOverviewDEPRECATED.generated.h"

class UButton;
class UTextBlock;
class UYWidget_ChatUserMenu;

UCLASS(Blueprintable, EditInlineNew)
class UYWidget_SocialOverviewDEPRECATED : public UYWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UButton* m_closeButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* m_playerName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UYWidget_ChatUserMenu* m_localUserContextMenu;
    
public:
    UYWidget_SocialOverviewDEPRECATED();

protected:
    UFUNCTION(BlueprintCallable)
    void ToggleLocalUserContextMenu(bool Open);
    
    UFUNCTION(BlueprintCallable)
    void OnFriendsListUpdated();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnCloseButtonClicked();
    
    UFUNCTION(BlueprintCallable)
    void HandleSquadInfoUpdated(const TArray<FYOutpostFriendInfo>& squadInfos);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_ToggleLocalUserContextMenuButton(bool enable);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_SetNumberOfInvites(int32 outbound, int32 inbound);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_SetNumberOfFriends(int32 online, int32 offline);
    
};

