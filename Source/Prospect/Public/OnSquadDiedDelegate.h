#pragma once
#include "CoreMinimal.h"
#include "OnSquadDiedDelegate.generated.h"

class AActor;
class UYPersistentDataAISquad;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnSquadDied, UYPersistentDataAISquad*, squadDied, AActor*, killer);

