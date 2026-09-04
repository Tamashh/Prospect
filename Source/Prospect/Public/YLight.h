#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "YLight.generated.h"

class UStaticMeshComponent;
class UYSpotlightComponent;

UCLASS(Blueprintable)
class AYLight : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* StaticMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UYSpotlightComponent* YSpotlight;
    
    AYLight(const FObjectInitializer& ObjectInitializer);

};

