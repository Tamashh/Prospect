#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "YServerPerformanceData.h"
#include "YServerPerformanceDataComponent.generated.h"

class AYPlayerController;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PROSPECT_API UYServerPerformanceDataComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FYServerPerformanceData m_replicatedData;
    
    UYServerPerformanceDataComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable)
    void DisableHitchDump(AYPlayerController* PlayerController) const;
    
};

