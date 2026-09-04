#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "YRawStatEntry.h"
#include "YEOSStatsExternalFunctions.generated.h"

UCLASS(Blueprintable)
class UYEOSStatsExternalFunctions : public UObject {
    GENERATED_BODY()
public:
    UYEOSStatsExternalFunctions();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetStatValueAsString(const FYRawStatEntry& statEntry);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetStatNameWithProperties(const FYRawStatEntry& statEntry);
    
};

