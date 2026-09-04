#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "YControllerCheatSimComponent.generated.h"

class AYCharacter;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UYControllerCheatSimComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AYCharacter* m_lastSelectedCharacter;
    
    UYControllerCheatSimComponent(const FObjectInitializer& ObjectInitializer);

};

