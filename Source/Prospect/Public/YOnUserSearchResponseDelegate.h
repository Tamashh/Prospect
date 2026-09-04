#pragma once
#include "CoreMinimal.h"
#include "YPlayfabUserAccountInfo.h"
#include "YOnUserSearchResponseDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FYOnUserSearchResponse, bool, hasFound, const FYPlayfabUserAccountInfo&, Result);

