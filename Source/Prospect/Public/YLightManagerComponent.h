#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "YLightManagerComponent.generated.h"

class AYLight;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UYLightManagerComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AYLight*> m_lights;
    
    UYLightManagerComponent(const FObjectInitializer& ObjectInitializer);

};

