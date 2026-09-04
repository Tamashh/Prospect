#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "YOnRotationCustomizationDeltaSignatureDelegate.h"
#include "YOnRotationObjectResetDelegate.h"
#include "YControllerCustomizationRotationComponent.generated.h"

class UObject;
class UYControllerCustomizationRotationComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PROSPECT_API UYControllerCustomizationRotationComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYOnRotationCustomizationDeltaSignature OnRotationDeltaDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYOnRotationObjectReset OnRotationResetDelegate;
    
    UYControllerCustomizationRotationComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetEnableRotationMode(bool RotationMode);
    
    UFUNCTION(BlueprintCallable)
    void RequestResetRotation(const FString& callerContext);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UYControllerCustomizationRotationComponent* FindCustomizationRotationComponent(const UObject* objCtx);
    
};

