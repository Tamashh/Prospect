#include "YSpline.h"

AYSpline::AYSpline(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bCheckCorrectLevel = true;
}

void AYSpline::RerunSplineConstructionScripts() {
}

TArray<FName> AYSpline::GetSocketNames(UStaticMesh* StaticMesh) {
    return TArray<FName>();
}


