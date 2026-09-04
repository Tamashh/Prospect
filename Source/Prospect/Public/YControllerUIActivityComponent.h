#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "BarVisibilityStateDelegate.h"
#include "InterpolationPercentChangedDelegate.h"
#include "InterpolationStateChangedDelegate.h"
#include "OnInitializeInterpolationDelegate.h"
#include "YControllerUIActivityComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UYControllerUIActivityComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInterpolationStateChanged OnInterpolationStateChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnInitializeInterpolation OnInterpolationInitialization;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInterpolationPercentChanged OnInterpolationPercentStateChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBarVisibilityState OnBarVisibility;
    
    UYControllerUIActivityComponent(const FObjectInitializer& ObjectInitializer);

};

