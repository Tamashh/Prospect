#pragma once
#include "CoreMinimal.h"
#include "YMessage.h"
#include "UObject/Object.h"
#include "YMessageManager.generated.h"

UCLASS(Blueprintable)
class PROSPECT_API UYMessageManager : public UObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FYOnChatMessageReceived, const FYMessage&, Message);
    
    UYMessageManager();

    UFUNCTION(BlueprintCallable)
    void OnFriendsDataUpdated();
    
};

