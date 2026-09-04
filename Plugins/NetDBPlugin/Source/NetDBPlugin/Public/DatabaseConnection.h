#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "DatabaseConnection.generated.h"

UCLASS(Blueprintable)
class NETDBPLUGIN_API UDatabaseConnection : public UObject {
    GENERATED_BODY()
public:
    UDatabaseConnection();

};

