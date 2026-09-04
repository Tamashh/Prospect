#pragma once
#include "CoreMinimal.h"
#include "YInsurancePayoutPackage.h"
#include "YOnClaimInsurancePayoutPackageDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FYOnClaimInsurancePayoutPackage, const FYInsurancePayoutPackage&, Package, int32, Index);

