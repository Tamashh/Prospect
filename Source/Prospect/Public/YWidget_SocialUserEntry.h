#pragma once
#include "CoreMinimal.h"
#include "YWidget.h"
#include "YOutpostFriendInfo.h"
#include "YWidget_SocialUserEntry.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UYWidget_SocialUserEntry : public UYWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYOutpostFriendInfo m_cachedUserInfo;
    
public:
    UYWidget_SocialUserEntry();

    UFUNCTION(BlueprintCallable)
    void SetData(const FYOutpostFriendInfo& friendInfo);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_SetToDefault();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnDataSet(const FYOutpostFriendInfo& friendInfo);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_CanShowVoiceMuteButton(bool isAllowed);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_CanShowSquadButton(bool isAllowed);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_CanShowSocialButton(bool isAllowed);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_CanShowReportButton(bool isAllowed);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_CanShowInviteButtons(bool isAllowed);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_CanShowChatMuteButton(bool isAllowed);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_CanShowBlockButton(bool isAllowed);
    
};

