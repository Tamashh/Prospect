#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "YOnMatchmakingLockToggledDelegate.h"
#include "YOutpostFriendInfo.h"
#include "YMatchmakingManager.generated.h"

class UYMatchmakingManager;

UCLASS(Blueprintable)
class PROSPECT_API UYMatchmakingManager : public UObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FYMatchmakingSettingsUpdated);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYMatchmakingSettingsUpdated OnMatchmakingSettingsUpdated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYOnMatchmakingLockToggled OnMatchmakingLockToggled;
    
    UYMatchmakingManager();

private:
    UFUNCTION(BlueprintCallable)
    void OnSquadInfoUpdated(const TArray<FYOutpostFriendInfo>& squadMembers);
    
public:
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static UYMatchmakingManager* GetInstance(const UObject* WorldContext);
    
};

