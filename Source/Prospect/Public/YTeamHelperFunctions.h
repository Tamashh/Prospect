#pragma once
#include "CoreMinimal.h"
#include "GenericTeamAgentInterface.h"
#include "UObject/Object.h"
#include "EYTeam.h"
#include "YPlayerUITeamInfo.h"
#include "YTeamHelperFunctions.generated.h"

class AActor;
class AYPlayerState;

UCLASS(Blueprintable)
class PROSPECT_API UYTeamHelperFunctions : public UObject {
    GENERATED_BODY()
public:
    UYTeamHelperFunctions();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsActorInSameTeamWithLocalPlayerOrLocallyControlled(AActor* actorContext, const FString& contextString);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsActorInSameTeamWithLocalPlayer(AActor* actorContext, const FString& contextString);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsActorInATeam(AActor* actorContext);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FYPlayerUITeamInfo GetUITeamInfoForPlayer(AYPlayerState* PlayerState);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static EYTeam FromGenericTeamToYTeam(const FGenericTeamId& TeamID);
    
    UFUNCTION(BlueprintCallable)
    static float FindCurrencyShareMultiplierForSquad(AYPlayerState* PlayerState);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static float FindCurrencyMultiplierForTeamMembers(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static TArray<AYPlayerState*> FindAlliedPlayerStates(AActor* actorContext, bool onlyActivePlayers);
    
    UFUNCTION(BlueprintCallable)
    static void FindAlliedActors(AActor* actorContext, TArray<AActor*>& OutActors);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float FindActorTotalDBNOTime(AActor* actorContext);
    
    UFUNCTION(BlueprintCallable)
    static int32 CalculateCurrencySplit(AActor* actorContext, int32 currencyAmount, bool& outIsShared);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool AreActorsInSameTeam(AActor* actorOne, AActor* actorTwo);
    
};

