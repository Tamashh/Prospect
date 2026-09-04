#pragma once
#include "CoreMinimal.h"
#include "YWidgetController.h"
#include "YActorWidgetController.generated.h"

class AActor;

UCLASS(Blueprintable)
class UYActorWidgetController : public UYWidgetController {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* m_actor;
    
    UYActorWidgetController();

};

