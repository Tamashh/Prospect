#pragma once
#include "CoreMinimal.h"
#include "OnAICharacterDiedDelegate.generated.h"

class AActor;
class AYAICharacter;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnAICharacterDied, AYAICharacter*, characterDied, AActor*, killer);

