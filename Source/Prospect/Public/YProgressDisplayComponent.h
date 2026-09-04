#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "YProgressDisplayComponent.generated.h"

class UObject;
class UYProgressComponent;
class UYProgressDisplayComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UYProgressDisplayComponent : public UActorComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FProgressDisplayDelegate, UYProgressComponent*, progress);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FProgressDisplayDelegate OnProgressDisplayReqeuest;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UYProgressComponent* m_currentProgress;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UYProgressComponent*> m_progressStack;
    
public:
    UYProgressDisplayComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void ShowProgress(UYProgressComponent* progress);
    
    UFUNCTION(BlueprintCallable)
    void HideProgress(UYProgressComponent* progress);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UYProgressComponent* GetCurrentProgress();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UYProgressDisplayComponent* FindProgressDisplayComponent(UObject* objectContext);
    
};

