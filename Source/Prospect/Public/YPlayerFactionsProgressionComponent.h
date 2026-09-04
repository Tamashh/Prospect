#pragma once
#include "CoreMinimal.h"
#include "YUpdatedFactionProgression.h"
#include "Components/ActorComponent.h"
#include "EYFaction.h"
#include "YOnLocalPlayerFactionLevelUpDelegate.h"
#include "YOnLocalPlayerFactionProgressDataReceivedDelegate.h"
#include "YPlayerFactionProgressionUIData.h"
#include "YPlayerFactionsProgressionComponent.generated.h"

class AActor;
class UYPlayerFactionsProgressionComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UYPlayerFactionsProgressionComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYOnLocalPlayerFactionProgressDataReceived OnLocalPlayerFactionProgressDataReceived;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYOnLocalPlayerFactionLevelUp OnLocalPlayerFactionLevelUp;
    
    UYPlayerFactionsProgressionComponent(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void SetFactionProgressionLocalData(const FYUpdatedFactionProgression& factionProgressData);
    
public:
    UFUNCTION(BlueprintCallable)
    static UYPlayerFactionsProgressionComponent* FindFactionProgressComponentChecked(AActor* actorContext);
    
    UFUNCTION(BlueprintCallable)
    static UYPlayerFactionsProgressionComponent* FindFactionProgressComponent(AActor* actorContext);
    
    UFUNCTION(BlueprintCallable)
    void CheckAndBroadcastFactionLevelUp(const EYFaction& Faction, int32 newFactionLevel, int32 currentFactionLevel);
    
    UFUNCTION(BlueprintCallable)
    void CacheAndBroadcastData(const FYPlayerFactionProgressionUIData& playerFactionProgressionUIData, bool predicted);
    
};

