#pragma once
#include "CoreMinimal.h"
#include "YWidget.h"
#include "YWidget_ChatUserMenu.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UYWidget_ChatUserMenu : public UYWidget {
    GENERATED_BODY()
public:
    UYWidget_ChatUserMenu();

    UFUNCTION(BlueprintCallable)
    void OpenMenu(const FString& UserId, const FString& playerName, const FString& messageText);
    
    UFUNCTION(BlueprintCallable)
    void OnVoicechatMuteButtonClicked();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRemoveFriendButtonClicked();
    
    UFUNCTION(BlueprintCallable)
    void OnLeaveSquadButtonClicked();
    
    UFUNCTION(BlueprintCallable)
    void OnInviteToSquadButtonClicked();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnChatMuteButtonClicked();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnBlockUserButtonClicked();
    
    UFUNCTION(BlueprintCallable)
    void OnAddFriendButtonClicked();
    
public:
    UFUNCTION(BlueprintCallable)
    void CloseMenu();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_PlayerNameUpdate(const FText& playerName);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_CanReportUser(bool available);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_CanRemoveFriend(bool canRemove);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_CanMuteVoiceChat(bool available, bool isVoicechatMute);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_CanMuteChat(bool available, bool isChatMute);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_CanLeaveSquad(bool canLeave);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_CanInviteToSquad(bool canInvite, bool isInvitePending);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_CanBlockUser(bool available, bool blockToggle);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_CanAddFriend(bool canAdd, bool isInvitePending);
    
};

