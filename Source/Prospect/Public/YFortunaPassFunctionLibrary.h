#pragma once
#include "CoreMinimal.h"
#include "YTimestamp.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Engine/DataTable.h"
#include "EYItemRarityType.h"
#include "YCurrentNextLevelData.h"
#include "YFortunaPassAction.h"
#include "YFortunaPassClaimedRewards.h"
#include "YFortunaPassLevel.h"
#include "YFortunaPassPlayerData.h"
#include "YFortunaPassReward.h"
#include "YSeasonRow.h"
#include "YFortunaPassFunctionLibrary.generated.h"

class AActor;
class UObject;

UCLASS(Blueprintable)
class UYFortunaPassFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UYFortunaPassFunctionLibrary();

    UFUNCTION(BlueprintCallable)
    static void UpdateSeasonWipeData(const UObject* ctxObj);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool TryGetActionConfigData(const UObject* worldCtx, const FString& ActionId, FYFortunaPassAction& actionOut);
    
    UFUNCTION(BlueprintCallable)
    static void RequestSkipPassLevels(const UObject* ctxObj, const int32& levelToSkip);
    
    UFUNCTION(BlueprintCallable)
    static void RequestSeasonWipeData(const UObject* ctxObj);
    
    UFUNCTION(BlueprintCallable)
    static void RequestClaimRewards(const UObject* ctxObj, const TArray<FName>& rewardsIds);
    
    UFUNCTION(BlueprintCallable)
    static bool IsSeasonActiveForSpecificDateTime(const FYSeasonRow& seasonRow, const FDateTime& nowTime);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsFortunaPassPremiumUnlocked(const UObject* ctxObj);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool HasEnoughStashSpaceForFortunaPassRewards(const AActor* ctxActor, const TArray<FName>& rewardsIds);
    
    UFUNCTION(BlueprintCallable)
    static FTimespan GetTimeDifferenceBetweenNow(const UObject* ctxObj, const FYTimestamp& Timestamp);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FText GetRemainingSeasonTimeTextFormatted(const UObject* ctxObj);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FTimespan GetRemainingSeasonTime(const UObject* ctxObj);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetNextSeasonStartTimeUtc(const UObject* ctxObj, FDateTime& startTimeUtc);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FText GetFortunaPassRewardTypeText(const UObject* ctxObj, const FYFortunaPassReward& reward);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static EYItemRarityType GetFortunaPassRewardRarity(const UObject* ctxObj, const FYFortunaPassReward& reward);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetFortunaPassLevelForXpAmount(const UObject* ctxObj, int32 xpAmount, int32& calculatedLevel);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetCurrentSeasonPremiumTrackUnlockCost(const UObject* ctxObj, bool withSkipLevels, int32& resultCost);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetCurrentSeasonEndTimeUtc(const UObject* ctxObj, FDateTime& endTimeUtc);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetCurrentFortunaPassSeasonXp(const UObject* ctxObj);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetCurrentAndNextFortunaPassLevelsXp(const UObject* ctxObj, const FString& callerContext, FYCurrentNextLevelData& currentNextLevelData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetClaimedFortunaPassRewards(const UObject* ctxObj, FYFortunaPassClaimedRewards& claimedRewardsIds);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<FName> GetClaimableRewards(const UObject* ctxObj);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName GetActiveFortunaPassSeasonRowId(const UObject* ctxObj);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FDataTableRowHandle GetActiveFortunaPassSeasonRow(const UObject* ctxObj);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetActiveFortunaPassSeasonLevelsRows(const UObject* ctxObj, TArray<FYFortunaPassLevel>& outLevels);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 ComputePremiumXpBoost(const AActor* Owner, const FYFortunaPassPlayerData& fortunaPassPlayerData);
    
};

