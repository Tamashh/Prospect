#pragma once
#include "CoreMinimal.h"
#include "NetDBAsyncExecutePreparedQueryDelegate.generated.h"

class UQueryRow;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FNetDBAsyncExecutePreparedQuery, const TArray<UQueryRow*>&, Results);

