#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "YPlayerProximityManagerComponent.generated.h"

class UYLocalPlayerProximityComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PROSPECT_API UYPlayerProximityManagerComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UYLocalPlayerProximityComponent*> m_proximityComponents;
    
public:
    UYPlayerProximityManagerComponent(const FObjectInitializer& ObjectInitializer);

};

