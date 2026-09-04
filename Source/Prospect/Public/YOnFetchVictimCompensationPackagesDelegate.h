#pragma once
#include "CoreMinimal.h"
#include "YClaimableVictimCompensation.h"
#include "YOnFetchVictimCompensationPackagesDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FYOnFetchVictimCompensationPackages, const TArray<FYClaimableVictimCompensation>&, packages);

