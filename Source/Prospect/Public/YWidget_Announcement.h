#pragma once
#include "CoreMinimal.h"
#include "EYChannelType.h"
#include "YAnnouncement.h"
#include "YWidget.h"
#include "EYChannelContext.h"
#include "YWidget_Announcement.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UYWidget_Announcement : public UYWidget {
    GENERATED_BODY()
public:
    UYWidget_Announcement();

    UFUNCTION(BlueprintCallable)
    void RemoveChatChannel(const EYChannelType& ChannelType, EYChannelContext Context);
    
    UFUNCTION(BlueprintCallable)
    void OnAnnouncementReceived(const FYAnnouncement& announcement);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnAnnouncementReceived(const FString& announcement);
    
    UFUNCTION(BlueprintCallable)
    void AddChatChannel(const EYChannelType& ChannelType, EYChannelContext Context);
    
};

