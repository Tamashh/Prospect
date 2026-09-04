#pragma once
#include "CoreMinimal.h"
#include "YWidget.h"
#include "YPlayfabUserAccountInfo.h"
#include "EYSocialUICategory.h"
#include "Templates/SubclassOf.h"
#include "YOutpostFriendInfo.h"
#include "YWidget_SocialUserList.generated.h"

class UYWidget_SocialUserEntry;

UCLASS(Blueprintable, EditInlineNew)
class UYWidget_SocialUserList : public UYWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UYWidget_SocialUserEntry> m_entryWBP;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EYSocialUICategory m_socialUICategory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UYWidget_SocialUserEntry*> m_entries;
    
public:
    UYWidget_SocialUserList();

private:
    UFUNCTION(BlueprintCallable)
    void OnUserSearchResponse(bool hasFound, const FYPlayfabUserAccountInfo& Result);
    
    UFUNCTION(BlueprintCallable)
    void OnPermanentNotificationsUpdated();
    
    UFUNCTION(BlueprintCallable)
    void OnPendingFriendRequests();
    
    UFUNCTION(BlueprintCallable)
    void OnFriendsListUpdated();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_SetNumberOfVisibleEntries(int32 numOfVisibleEntries);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UYWidget_SocialUserEntry* BP_CreateAndAddEntry(const FYOutpostFriendInfo& friendInfo);
    
};

