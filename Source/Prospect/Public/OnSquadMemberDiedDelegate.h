#pragma once
#include "CoreMinimal.h"
#include "EYSquadID.h"
#include "OnSquadMemberDiedDelegate.generated.h"

class AYCharacter;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnSquadMemberDied, EYSquadID, squadId, AYCharacter*, Character);

