#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EYActivityType.h"
#include "OnActivityActorDepletedDelegate.h"
#include "OnSetupCompleteDelegate.h"
#include "YActivityComponent.generated.h"

class AYActivityActorManager;
class AYActivityLocation;
class UYActivityRegisterComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UYActivityComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_destroySkeletalMeshesOnDedicatedServer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_isPlacedInWorld;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AYActivityActorManager* m_activityActorManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UYActivityRegisterComponent* m_registerComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AYActivityLocation* m_activityLocation;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_isMarkedAsDepleted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString m_activitySubType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString m_actorBIName;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnActivityActorDepleted OnActivityActorDepleted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSetupComplete OnActivitySetupComplete;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSetupComplete OnActivitySetupCompletePlacedInWorld;
    
    UYActivityComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetupActivityComponent(AYActivityActorManager* Activity, AYActivityLocation* activityLocation, UYActivityRegisterComponent* registerOverride);
    
    UFUNCTION(BlueprintCallable)
    void MarkActivityActorAsDepleted();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    EYActivityType GetActivityType();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AYActivityLocation* GetActivityLocation();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AYActivityActorManager* GetActivity();
    
};

