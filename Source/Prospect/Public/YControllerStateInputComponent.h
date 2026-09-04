#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EYInputBlockingAssociation.h"
#include "YOnInputStateChangedDelegate.h"
#include "YStateInputFrameCachedData.h"
#include "YControllerStateInputComponent.generated.h"

class APawn;
class UYPlayerCharacterStateComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UYControllerStateInputComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYOnInputStateChanged OnInputStateChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYStateInputFrameCachedData m_inputData;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UYPlayerCharacterStateComponent* m_characterStateComponent;
    
public:
    UYControllerStateInputComponent(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void OnTimeoutBlockMovementInputState(EYInputBlockingAssociation bindingAssociation);
    
    UFUNCTION(BlueprintCallable)
    void OnPawnAssigned(APawn* oldPawn, APawn* newPawn);
    
};

