#pragma once
#include "CoreMinimal.h"
#include "EYVanityType.h"
#include "Components/ActorComponent.h"
#include "OnBannerSpawnedDelegate.h"
#include "YGlobalVanityItem.h"
#include "YCharacterBannerComponent.generated.h"

class AYBannerActor;
class AYSprayActor;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UYCharacterBannerComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnBannerSpawned BP_OnBannerSpawned;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYGlobalVanityItem m_SelectedVanityItem;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AYBannerActor* m_localBannerAttachActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AYBannerActor* m_spawnedBannerAuthority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AYSprayActor*> m_spawnedSpraysAuthority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_spawnedSprayCounter;
    
public:
    UYCharacterBannerComponent(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void SetBannerLocalAttachState(bool Visible);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSpawnSpray(FYGlobalVanityItem vanityItem);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSpawnBanner(FYGlobalVanityItem vanityItem);
    
    UFUNCTION(BlueprintCallable)
    void OnTransitionFirstPerson() const;
    
    UFUNCTION(BlueprintCallable)
    void OnClearBannerState() const;
    
    UFUNCTION(BlueprintCallable)
    void OnBannerStateClear(bool wasInterrupted);
    
    UFUNCTION(BlueprintCallable)
    void OnAuthorithySpawnBannerActor(FYGlobalVanityItem vanityItem);
    
    UFUNCTION(BlueprintCallable)
    void OnActivatedBannerState();
    
public:
    UFUNCTION(BlueprintCallable)
    void EnterBannerStateAndCreateBanner(FYGlobalVanityItem vanityItem, EYVanityType vanityType);
    
};

