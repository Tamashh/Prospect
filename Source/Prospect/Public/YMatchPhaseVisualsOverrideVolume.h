#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Volume.h"
#include "YMatchPhaseVisualsOverrideVolume.generated.h"

UCLASS(Blueprintable)
class AYMatchPhaseVisualsOverrideVolume : public AVolume {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_volumeBlendRadius;
    
    AYMatchPhaseVisualsOverrideVolume(const FObjectInitializer& ObjectInitializer);

};

