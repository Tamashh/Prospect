#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EYProgressState.h"
#include "ProgressUIData.h"
#include "YProgressComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UYProgressComponent : public UActorComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FProgressStateUpdate, EYProgressState, State);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FProgressStateUpdate OnProgressUpdated;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FProgressUIData m_uiData;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_totalTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_timeLeft;
    
public:
    UYProgressComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void StopProgress();
    
    UFUNCTION(BlueprintCallable)
    void StartProgress(float totalTime, float timeLeft);
    
    UFUNCTION(BlueprintCallable)
    void SetUIData(FProgressUIData progressData);
    
    UFUNCTION(BlueprintCallable)
    void SetDescription(FText Description);
    
    UFUNCTION(BlueprintCallable)
    void ReverseProgress(float totalTime, float timeLeft);
    
    UFUNCTION(BlueprintCallable)
    void ResumeProgress();
    
    UFUNCTION(BlueprintCallable)
    void ForceProgressValue(float progress);
    
};

