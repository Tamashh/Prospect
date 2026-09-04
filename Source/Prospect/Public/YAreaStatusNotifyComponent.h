#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "OnAreaRespawnedDelegate.h"
#include "YAreaStatusNotifyComponent.generated.h"

class AYActivityLocation;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PROSPECT_API UYAreaStatusNotifyComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnAreaRespawned BP_OnAreaRespawned;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AYActivityLocation* m_linkedAreaLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_isEnabled;
    
    UYAreaStatusNotifyComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void OnAreaStatusChanged(AYActivityLocation* Location);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnActivitiesLoaded();
    
};

