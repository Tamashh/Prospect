#pragma once
#include "CoreMinimal.h"
#include "Components/WidgetComponent.h"
#include "YWidgetComponentFOV.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UYWidgetComponentFOV : public UWidgetComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_defaultFOV;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_nearClipDistance;
    
    UYWidgetComponentFOV(const FObjectInitializer& ObjectInitializer);

};

