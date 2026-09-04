#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "YGetPlayerStatisticsResponse.h"
#include "EYGetErrorHandling.h"
#include "YStatsManager.generated.h"

class UYStatsManager;

UCLASS(Blueprintable)
class UYStatsManager : public UObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FYStatsFetchedSignature);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYStatsFetchedSignature StatsFetched;
    
    UYStatsManager();

    UFUNCTION(BlueprintCallable)
    void SetStatsDirty();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnFetchPlayerStatisticsResult(const FString& UserId, const FYGetPlayerStatisticsResponse& azureResult);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetStatSumForAllSeasons(const FString& statName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetPlayerStatistic(const FString& statName, const int32 season) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetAllPlayerStatisticAsJsonString() const;
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static UYStatsManager* Get(const UObject* WorldContext, EYGetErrorHandling errorHandling);
    
    UFUNCTION(BlueprintCallable)
    void FetchAllPlayFabStats(UObject* objCtx, bool checkDirty);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool AreStatsDirty() const;
    
};

