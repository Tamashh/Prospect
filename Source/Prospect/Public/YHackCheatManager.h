#pragma once
#include "CoreMinimal.h"
#include "YCheatManagerExtension.h"
#include "YHackCheatManager.generated.h"

UCLASS(Blueprintable)
class UYHackCheatManager : public UYCheatManagerExtension {
    GENERATED_BODY()
public:
    UYHackCheatManager();

    UFUNCTION(BlueprintCallable, Exec, BlueprintPure=false)
    void YDebugTestInvalidRPC() const;
    
    UFUNCTION(BlueprintCallable, Exec, BlueprintPure=false)
    void YDebugSpeedHackTest() const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void YDebugPrintOffsets();
    
    UFUNCTION(BlueprintCallable, Exec)
    void YDebugPrintEngineVersion();
    
    UFUNCTION(BlueprintCallable, Exec)
    void YDebugFireShot();
    
    UFUNCTION(BlueprintCallable, Exec)
    void YDebugCrash();
    
    UFUNCTION(BlueprintCallable, Exec, BlueprintPure=false)
    void YDebugClearState(int64 newState) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure, Exec)
    void YDebugCheatSpawnItemWithoutOrigin(const FName& baseItemId) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure, Exec)
    void YDebugCheatSpawnItemsWithDuplicateOrigins(const FName& baseItemId) const;
    
    UFUNCTION(BlueprintCallable, Exec, BlueprintPure=false)
    void YDebugCheatSetGravityScale(float newGravityScale) const;
    
    UFUNCTION(BlueprintCallable, Exec, BlueprintPure=false)
    void YDebugCheatSetDefaultGravityZ(float newDefaultGravityZ) const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void YDebugCheatHitScanMagicBullet2();
    
    UFUNCTION(BlueprintCallable, Exec)
    void YDebugCheatHitScanMagicBullet1();
    
    UFUNCTION(BlueprintCallable, Exec, BlueprintPure=false)
    void YDebugActivateNewState(int64 newState) const;
    
};

