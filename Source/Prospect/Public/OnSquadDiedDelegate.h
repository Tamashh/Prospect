#pragma once
#include "CoreMinimal.h"
#include "OnSquadDiedDelegate.generated.h"

class AActor;
class UYPersistentActorInfoAISquad;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnSquadDied, UYPersistentActorInfoAISquad*, squadDied, AActor*, killer);

