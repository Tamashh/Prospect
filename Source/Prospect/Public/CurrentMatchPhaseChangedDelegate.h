#pragma once
#include "CoreMinimal.h"
#include "YMatchPhaseData.h"
#include "CurrentMatchPhaseChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FCurrentMatchPhaseChanged, const FYMatchPhaseData&, MatchPhaseData);

