#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "YTransitionRequestData.h"
#include "YTransitionRuntimeData.h"
#include "YControllerTransitionComponent.generated.h"

class UObject;
class UYWidget;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PROSPECT_API UYControllerTransitionComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYTransitionRuntimeData m_runtimeData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UYWidget* m_transitionObject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_useTransitionWidget;
    
public:
    UYControllerTransitionComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    static bool StartTransition(const UObject* objCtx, const FYTransitionRequestData& requestData);
    
protected:
    UFUNCTION(BlueprintCallable)
    static void SetCameraTransitionMode(const UObject* objCtx, bool withTransitionWidget);
    
    UFUNCTION(BlueprintCallable)
    void OnRequestCompleted();
    
};

