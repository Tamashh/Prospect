#pragma once
#include "CoreMinimal.h"
#include "YInsurancePayoutPackage.h"
#include "YOnFetchInsuranceClaimsDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FYOnFetchInsuranceClaims, const TArray<FYInsurancePayoutPackage>&, packages);

