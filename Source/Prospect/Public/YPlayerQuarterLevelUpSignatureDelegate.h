#pragma once
#include "CoreMinimal.h"
#include "YPlayerQuarterStatus.h"
#include "YPlayerQuarterLevelUpSignatureDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FYPlayerQuarterLevelUpSignature, const FYPlayerQuarterStatus&, playerQuarterStatus);

