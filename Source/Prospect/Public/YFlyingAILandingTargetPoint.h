#pragma once
#include "CoreMinimal.h"
#include "Engine/TargetPoint.h"
#include "YFlyingAILandingTargetPoint.generated.h"

class USceneComponent;

UCLASS(Blueprintable)
class PROSPECT_API AYFlyingAILandingTargetPoint : public ATargetPoint {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* m_landingStartPoint;

    AYFlyingAILandingTargetPoint(const FObjectInitializer& ObjectInitializer);

};
