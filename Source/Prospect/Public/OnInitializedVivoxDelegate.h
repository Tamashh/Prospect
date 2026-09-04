#pragma once
#include "CoreMinimal.h"
#include "OnInitializedVivoxDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnInitializedVivox, bool, succeeded);

