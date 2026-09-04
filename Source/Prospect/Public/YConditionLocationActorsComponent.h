#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "YConditionLocationActorsComponent.generated.h"

class AYConditionLocationActor;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PROSPECT_API UYConditionLocationActorsComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AYConditionLocationActor*> m_actors;
    
    UYConditionLocationActorsComponent(const FObjectInitializer& ObjectInitializer);

};

