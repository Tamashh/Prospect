#pragma once
#include "CoreMinimal.h"
#include "Components/SpotLightComponent.h"
#include "YSpotlightComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UYSpotlightComponent : public USpotLightComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float shadowCastDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanEverCastShadow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanEverAffectTranslucency;
    
    UYSpotlightComponent(const FObjectInitializer& ObjectInitializer);

};

