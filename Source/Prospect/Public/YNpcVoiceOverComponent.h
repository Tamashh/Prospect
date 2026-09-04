#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "YNpcVoiceOverComponent.generated.h"

class AYNPCCharacter;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PROSPECT_API UYNpcVoiceOverComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AYNPCCharacter* m_npcActor;
    
public:
    UYNpcVoiceOverComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_BindOnEvents();
    
};

