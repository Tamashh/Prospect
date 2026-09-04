#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "YAIMontagePlayInfo.h"
#include "YAIMontageStopInfo.h"
#include "YAIAnimationComponent.generated.h"

class AActor;
class UAnimInstance;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UYAIAnimationComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* m_actorToRotateTowards;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimInstance* m_animInstance;
    
    UYAIAnimationComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void StopAnimationMontage(FYAIMontageStopInfo Info);
    
    UFUNCTION(BlueprintCallable)
    bool PlayAnimationMontage(FYAIMontagePlayInfo montageInfo);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastStopAnimationMontage(FYAIMontageStopInfo Info);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastPlayAnimationMontage(FYAIMontagePlayInfo Info);
    
};

