#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "YControllerPingRestrictionComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PROSPECT_API UYControllerPingRestrictionComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_additionalPing;
    
public:
    UYControllerPingRestrictionComponent(const FObjectInitializer& ObjectInitializer);

};

