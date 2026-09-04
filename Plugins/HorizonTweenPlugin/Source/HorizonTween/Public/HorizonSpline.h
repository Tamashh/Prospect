#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "HorizonSpline.generated.h"

class USplineComponent;

UCLASS(Blueprintable)
class AHorizonSpline : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USplineComponent* SplineComponent;
    
    AHorizonSpline(const FObjectInitializer& ObjectInitializer);

};

