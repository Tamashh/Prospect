#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Volume.h"
#include "YLevelStreamingVolume.generated.h"

class AYLevelStreamingManager;

UCLASS(Blueprintable)
class AYLevelStreamingVolume : public AVolume {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AYLevelStreamingManager* m_levelStreamingManager;
    
    AYLevelStreamingVolume(const FObjectInitializer& ObjectInitializer);

};

