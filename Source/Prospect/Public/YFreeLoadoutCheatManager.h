#pragma once
#include "CoreMinimal.h"
#include "YCheatManagerExtension.h"
#include "YFreeLoadoutCheatManager.generated.h"

UCLASS(Blueprintable)
class UYFreeLoadoutCheatManager : public UYCheatManagerExtension {
    GENERATED_BODY()
public:
    UYFreeLoadoutCheatManager();

    UFUNCTION(Exec)
    void YDebugSetFreeLoadoutInfo(int64 secondsTillAvailable, int32 randomSeed) const;

    UFUNCTION(BlueprintCallable, Exec)
    void YDebugLogFreeLoadoutInfo() const;

    UFUNCTION(BlueprintCallable, Exec)
    void YDebugFreeLoadoutForceRefreshTime(int32 hourUtc) const;

};
