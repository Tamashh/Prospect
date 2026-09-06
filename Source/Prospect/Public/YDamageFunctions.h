#pragma once
#include "CoreMinimal.h"
#include "GenericTeamAgentInterface.h"
#include "UObject/Object.h"
#include "YDamageOriginInfo.h"
#include "YDealtDamageData.h"
#include "YFindActorDealDamageRequestData.h"
#include "YRadialDamageDealingData.h"
#include "YRadialDamageEntry.h"
#include "YDamageFunctions.generated.h"

class AActor;

UCLASS(Blueprintable)
class UYDamageFunctions : public UObject {
    GENERATED_BODY()
public:
    UYDamageFunctions();

    UFUNCTION(BlueprintCallable)
    static FString RetrieveDamageOriginId(const FYDamageOriginInfo& damageOriginInfo);
    
    UFUNCTION(BlueprintCallable)
    static void KillAllActors(TArray<AActor*> actors);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsTeamIdPlayer(const FGenericTeamId& damageTeamId);
    
    UFUNCTION(BlueprintCallable)
    static bool IsFriendlyFireEnabled();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsFriendlyFire(const FYDealtDamageData& damageDealt);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsDamageDealtFromPlayer(const FYDealtDamageData& damageDealt);
    
    UFUNCTION(BlueprintCallable)
    static bool IsAbleToHeal(AActor* DamageCauser, AActor* damageTaker);
    
    UFUNCTION(BlueprintCallable)
    static bool IsAbleToDamage(AActor* damageTaker, AActor* DamageCauser, bool canDamageSelf);
    
    UFUNCTION(BlueprintCallable)
    static TArray<AActor*> GetHostilePawns(AActor* queryActor, float Radius, AActor* teamActor);
    
    UFUNCTION(BlueprintCallable)
    static FText GetDamageCauserNameLocalized(AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    static bool FindActorsToDamageRadial(FYFindActorDealDamageRequestData Data, TArray<FYRadialDamageEntry>& outEntries);
    
    UFUNCTION(BlueprintCallable)
    static bool FindActorsToDamageCapsule(FYFindActorDealDamageRequestData Data, TArray<FYRadialDamageEntry>& outEntries);
    
    UFUNCTION(BlueprintCallable)
    static TArray<AActor*> ApplyRadialDamage(FYRadialDamageDealingData damageEntry);
    
    UFUNCTION(BlueprintCallable)
    static bool ApplyDamage(UPARAM(Ref) FYDealtDamageData& Data);
    
};

