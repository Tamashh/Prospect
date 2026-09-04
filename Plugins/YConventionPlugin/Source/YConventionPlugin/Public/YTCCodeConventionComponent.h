#pragma once
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "YCodeConventionBlueprintVarGroup.h"
#include "YTCCodeConventionComponent.generated.h"

class UYTCCodeConventionComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UYTCCodeConventionComponent : public USceneComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UYTCCodeConventionComponent* MyInstance;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYCodeConventionBlueprintVarGroup BlueprintGroup;
    
public:
    UYTCCodeConventionComponent(const FObjectInitializer& ObjectInitializer);

};

