#pragma once
#include "CoreMinimal.h"
#include "YInsurancePayoutPackage.h"
#include "YOnInsurancePayoutPackageVoidedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FYOnInsurancePayoutPackageVoided, const TArray<FYInsurancePayoutPackage>&, remainingPackages);

