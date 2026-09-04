#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Engine/DataTable.h"
#include "EYActivityType.h"
#include "OnActivitiesSpawnedDelegate.h"
#include "OnSpawnTokensEmptyDelegate.h"
#include "YSpawnActivityActorTokenData.h"
#include "YActivitiesManager.generated.h"

class AYActivityActorManager;
class UObject;
class UYActivitiesManager;
class UYActivityComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PROSPECT_API UYActivitiesManager : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UYActivityComponent*> m_activityComponents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_spawnRequestsAllowedPerFrame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FYSpawnActivityActorTokenData> m_spawnTokens;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    TArray<EYActivityType> m_activeActivityTypes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle m_activitySet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle m_activitySetTutorial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AYActivityActorManager*> m_activities;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnActivitiesSpawned OnActivitiesSpawned;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSpawnTokensEmpty OnSpawnTokensEmpty;
    
    UYActivitiesManager(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void OnActivitiesLoaded();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsActivityActive(EYActivityType Type);
    
    UFUNCTION(BlueprintCallable)
    AYActivityActorManager* GetActivityByType(EYActivityType activityType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<AYActivityActorManager*> GetActivities() const;
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UYActivitiesManager* FindActivitiesManager(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    bool AddSpawnActivityActorToken(FYSpawnActivityActorTokenData requestData);
    
};

