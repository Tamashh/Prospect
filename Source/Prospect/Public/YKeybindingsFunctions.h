#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "GameFramework/PlayerInput.h"
#include "InputCoreTypes.h"
#include "Framework/Commands/InputChord.h"
#include "EYInputKeybindingType.h"
#include "YKeybindingsFunctions.generated.h"

class UTexture2D;
class UYKeybindingsModel;

UCLASS(Blueprintable)
class UYKeybindingsFunctions : public UObject {
    GENERATED_BODY()
public:
    UYKeybindingsFunctions();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UYKeybindingsModel* TryFindKeybindingsModel(const UObject* objCtx);
    
    UFUNCTION(BlueprintCallable)
    static void SetKeyForInputBinding(const UObject* objCtx, const FName& ActionName, const FInputChord& InputChord, EYInputKeybindingType keybindingType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsUsingController(const UObject* objCtx);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetKeyForInputBindingName(const UObject* objCtx, FName inputBindingName, FInputActionKeyMapping& InputActionKeyMapping);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetKeybindingIconRowFromKey(const UObject* objCtx, const FKey& Key, TSoftObjectPtr<UTexture2D>& Icon);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool DoesCustomInputIniExist();
    
};

