#include "YLight.h"
#include "Components/SceneComponent.h"
#include "Components/StaticMeshComponent.h"
#include "YSpotlightComponent.h"

AYLight::AYLight(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bCanBeInCluster = true;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->StaticMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMesh"));
    this->YSpotlight = CreateDefaultSubobject<UYSpotlightComponent>(TEXT("YSpotlight"));
    this->StaticMesh->SetupAttachment(RootComponent);
    this->YSpotlight->SetupAttachment(StaticMesh);
}


