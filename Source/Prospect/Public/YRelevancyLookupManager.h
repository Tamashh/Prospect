#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "YRelevantPlayerControllersData.h"
#include "YRelevancyLookupManager.generated.h"

class APlayerState;
class AYPlayerController;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UYRelevancyLookupManager : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FYRelevantPlayerControllersData> m_relevantPlayerControllerMapping;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AYPlayerController*> m_recentlyJoinedPlayerControllers;
    
public:
    UYRelevancyLookupManager(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void OnPlayerJoinedCallback(APlayerState* PlayerState);
    
};

