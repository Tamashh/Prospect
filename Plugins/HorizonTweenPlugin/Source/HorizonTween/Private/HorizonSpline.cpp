#include "HorizonSpline.h"
#include "Components/SplineComponent.h"

AHorizonSpline::AHorizonSpline(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USplineComponent>(TEXT("Spline"));
    this->SplineComponent = (USplineComponent*)RootComponent;
}


