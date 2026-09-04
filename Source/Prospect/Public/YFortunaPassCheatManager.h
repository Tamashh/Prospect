#pragma once
#include "CoreMinimal.h"
#include "YCheatManagerExtension.h"
#include "YFortunaPassCheatManager.generated.h"

UCLASS(Blueprintable)
class UYFortunaPassCheatManager : public UYCheatManagerExtension {
    GENERATED_BODY()
public:
    UYFortunaPassCheatManager();

    UFUNCTION(BlueprintCallable, Exec)
    void YSetDailyCapResetTimeMinutesFromNow(const int32 Minutes) const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void YDebugSetFortunaPassPremiumUnlock(bool newState) const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void YDebugSetActionNumOfTimesExecuted(const FString& ActionId, const int32 progress);
    
    UFUNCTION(BlueprintCallable, Exec)
    void YDebugResetActionsDailyCapXP();
    
    UFUNCTION(BlueprintCallable, Exec)
    void YDebugResetActionNumOfTimesExecuted(const FString& ActionId);
    
    UFUNCTION(BlueprintCallable, Exec)
    void YDebugPrintPlayerPremiumXpBoost() const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void YDebugPrintEnabledActionsData() const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void YDebugPrepareForSeasonWipeOnNextLogin() const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void YDebugFortunaPassSkipNextLevel();
    
    UFUNCTION(BlueprintCallable, Exec)
    void YDebugFortunaPassSeasonForceRefresh() const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void YDebugFortunaPassForceSpecificLevel(int32 NewLevel);
    
};

