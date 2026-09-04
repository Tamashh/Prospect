#pragma once
#include "CoreMinimal.h"
#include "YWidget.h"
#include "YPlayfabUserAccountInfo.h"
#include "YOutpostFriendInfo.h"
#include "YWidget_SocialOverview.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UYWidget_SocialOverview : public UYWidget {
    GENERATED_BODY()
public:
    UYWidget_SocialOverview();

private:
    UFUNCTION(BlueprintCallable)
    void OnUserSearchResponse(bool hasFound, const FYPlayfabUserAccountInfo& Result);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnUserSearch(const FString& Username);
    
    UFUNCTION(BlueprintCallable)
    void OnFriendSearch(const FString& Username);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnCloseButtonClicked();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnUserSearchResult(bool hasFound, const FYOutpostFriendInfo& foundUser);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnFriendSearchResponse(const TArray<FString>& foundUserIds);
    
};

