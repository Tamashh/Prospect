#include "YFlyingAILandingTargetPoint.h"
#include "Components/SceneComponent.h"

AYFlyingAILandingTargetPoint::AYFlyingAILandingTargetPoint(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_landingStartPoint = CreateDefaultSubobject<USceneComponent>(TEXT("Landing Start Point"));
    this->m_landingStartPoint->SetupAttachment(RootComponent);
}
