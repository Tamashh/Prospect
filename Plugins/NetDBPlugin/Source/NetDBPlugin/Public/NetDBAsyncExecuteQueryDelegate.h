#pragma once
#include "CoreMinimal.h"
#include "NetDBAsyncExecuteQueryDelegate.generated.h"

class UQueryRow;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FNetDBAsyncExecuteQuery, const TArray<UQueryRow*>&, Results);

