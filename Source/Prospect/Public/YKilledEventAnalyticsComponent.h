#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GameFramework/OnlineReplStructs.h"
#include "OnTrySendingKilledEventDelegate.h"
#include "YDealtDamageData.h"
#include "YPlayerKilledEvent.h"
#include "YKilledEventAnalyticsComponent.generated.h"

class APawn;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PROSPECT_API UYKilledEventAnalyticsComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnTrySendingKilledEvent BP_OnTrySendingKilledEvent;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FUniqueNetIdRepl, FYPlayerKilledEvent> m_killedEventInfos;
    
public:
    UYKilledEventAnalyticsComponent(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void OnPlayerCharacterSet(APawn* oldPawn, APawn* newPawn);
    
    UFUNCTION(BlueprintCallable)
    void OnDamageTaken(const FYDealtDamageData& damageDealt);
    
};

