#pragma once
#include "CoreMinimal.h"
#include "YCheatManagerExtension.h"
#include "YVictimCompensationCheatManager.generated.h"

UCLASS(Blueprintable)
class UYVictimCompensationCheatManager : public UYCheatManagerExtension {
    GENERATED_BODY()
public:
    UYVictimCompensationCheatManager();

    UFUNCTION(BlueprintCallable, Exec)
    void YDebugUpdateKillsForPlayer() const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void YDebugStoreDeathSnapshot(const FString& killerId) const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void YDebugPrintAvailableCompensationPackages() const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void YDebugClaimCompensationPackage(const FString& Guid) const;
    
};

