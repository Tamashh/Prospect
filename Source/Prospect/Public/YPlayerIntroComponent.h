#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "OnDropPodIntroStartedDelegate.h"
#include "OnFinishedIntroDelegate.h"
#include "OnIntroStartedDelegate.h"
#include "OnReadyToStartTutorialIntroDelegate.h"
#include "OnSpawnBackgroundDropPodDelegate.h"
#include "YPlayerIntroComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PROSPECT_API UYPlayerIntroComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnReadyToStartTutorialIntro BP_OnReadyToStartTutorialIntro;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnDropPodIntroStarted BP_OnDropPodIntroStarted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSpawnBackgroundDropPod BP_OnSpawnBackgroundDropPod;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnFinishedIntro BP_OnIntroFinished;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnIntroStarted BP_OnIntroStarted;
    
    UYPlayerIntroComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void TryStartDropPodIntro();
    
protected:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSpawnBackgroundDropPod();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerAcknowledgeIntroFinished();
    
    UFUNCTION(BlueprintCallable)
    void OnIntroFinished();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsUsingDropPodIntro() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsIntroFinished() const;
    
};

