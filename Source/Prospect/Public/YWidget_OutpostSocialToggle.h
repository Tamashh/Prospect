#pragma once
#include "CoreMinimal.h"
#include "YWidget.h"
#include "YWidget_OutpostSocialToggle.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UYWidget_OutpostSocialToggle : public UYWidget {
    GENERATED_BODY()
public:
    UYWidget_OutpostSocialToggle();

private:
    UFUNCTION(BlueprintCallable)
    void OnFriendsListUpdated();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_SetNumberOfOnlineFriends(int32 numOfOnlineFriends);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_SetNumberOfInvites(int32 numOfInvites);
    
};

