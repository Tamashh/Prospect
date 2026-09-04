#pragma once
#include "CoreMinimal.h"
#include "YCheatManagerExtension.h"
#include "YStatsCheatManager.generated.h"

UCLASS(Blueprintable)
class UYStatsCheatManager : public UYCheatManagerExtension {
    GENERATED_BODY()
public:
    UYStatsCheatManager();

    UFUNCTION(BlueprintCallable, Exec)
    void YDebugUpdateStatistic(const FString& statName, const int32 Value);
    
    UFUNCTION(BlueprintCallable, Exec)
    void YDebugIncrementStatisticVersion(const FString& statName) const;
    
};

