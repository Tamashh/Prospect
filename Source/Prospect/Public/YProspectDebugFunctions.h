#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "YProspectDebugFunctions.generated.h"

class APawn;

UCLASS(Blueprintable)
class UYProspectDebugFunctions : public UObject {
    GENERATED_BODY()
public:
    UYProspectDebugFunctions();

    UFUNCTION(BlueprintCallable)
    static void LogPlayerStatus(APawn* playerPawn);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString CreateBugItGoString(FVector Location, FRotator rootator);
    
};

