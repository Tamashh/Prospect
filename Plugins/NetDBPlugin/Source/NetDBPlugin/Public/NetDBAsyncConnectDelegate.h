#pragma once
#include "CoreMinimal.h"
#include "NetDBAsyncConnectDelegate.generated.h"

class UDatabaseConnection;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FNetDBAsyncConnect, UDatabaseConnection*, Connection);

