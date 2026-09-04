#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "OnPlayerCloseDelegate.h"
#include "OnPlayerNotCloseAnymoreDelegate.h"
#include "YLocalPlayerProximityComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PROSPECT_API UYLocalPlayerProximityComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPlayerClose OnPlayerClose;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPlayerNotCloseAnymore OnPlayerNotCloseAnymore;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_distanceMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_isPlayerClose;
    
public:
    UYLocalPlayerProximityComponent(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnPlayerNotCloseAnymore();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnPlayerClose();
    
};

