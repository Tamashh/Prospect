#pragma once
#include "CoreMinimal.h"
#include "YUpdatedFactionProgression.h"
#include "UObject/Object.h"
#include "EYFaction.h"
#include "YFactionUnlockRewards.h"
#include "YPlayerFactionProgressionUIData.h"
#include "YUpdateFactionProgressionLocal.h"
#include "YFactionsProgressUtils.generated.h"

class AActor;

UCLASS(Blueprintable)
class PROSPECT_API UYFactionsProgressUtils : public UObject {
    GENERATED_BODY()
public:
    UYFactionsProgressUtils();

    UFUNCTION(BlueprintCallable)
    static bool TryGetPlayerFactionProgressUIData(UObject* wrldCtx, const FYUpdatedFactionProgression& Data, FYPlayerFactionProgressionUIData& playerFactionProgressionUIData);
    
    UFUNCTION(BlueprintCallable)
    static bool TryGetNextLevelFactionUnlocks(UObject* worldCtx, const FString& factionId, int32 currentFactionLevel, TArray<FString>& outRewards);
    
    UFUNCTION(BlueprintCallable)
    static bool TryGetFactionLocalCachedData(AActor* actorCtx, const FString& factionId, FYPlayerFactionProgressionUIData& playerFactionProgressionUIData);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static bool TryGetFactionId(UObject* WorldContext, const FString& factionProgressionString, FString& factionIdOut);
    
    UFUNCTION(BlueprintCallable)
    static int32 SetFactionProgressionLocalData(AActor* actorCtx, const FYUpdateFactionProgressionLocal& playerFactionProgressionLocal);
    
    UFUNCTION(BlueprintCallable)
    static FString GetFactionUnlockID(const FString& factionId, int32 specificLevel);
    
    UFUNCTION(BlueprintCallable)
    static EYFaction GetFactionEnumFromString(const FString& factionId);
    
    UFUNCTION(BlueprintCallable)
    static EYFaction GetFactionEnumFromName(const FName& factionId);
    
    UFUNCTION(BlueprintCallable)
    static bool FindFactionRewardData(UObject* worldCtx, const FString& factionId, int32 specificLevel, FYFactionUnlockRewards& outRewardData);
    
};

