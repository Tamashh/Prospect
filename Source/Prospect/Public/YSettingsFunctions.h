#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "YSettingsFunctions.generated.h"

class APlayerController;

UCLASS(Blueprintable)
class UYSettingsFunctions : public UObject {
    GENERATED_BODY()
public:
    UYSettingsFunctions();

    UFUNCTION(BlueprintCallable)
    static void SetMaintainYFOV(APlayerController* PlayerController);
    
    UFUNCTION(BlueprintCallable)
    static void SetMaintainXFOV(APlayerController* PlayerController);
    
    UFUNCTION(BlueprintCallable)
    static void SetApplicationScale(float ApplicationScale);
    
    UFUNCTION(BlueprintCallable)
    static void RevertChanges(UObject* objectContext);
    
    UFUNCTION(BlueprintCallable)
    static void RestoreDefaults(UObject* objectContext);
    
    UFUNCTION(BlueprintCallable)
    static TMap<int32, FString> GetGraphicAdapterNames(APlayerController* PlayerController);
    
    UFUNCTION(BlueprintCallable)
    static void ApplySettings(UObject* objectContext);
    
};

