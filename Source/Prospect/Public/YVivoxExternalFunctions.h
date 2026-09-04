#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "YVivoxExternalFunctions.generated.h"

UCLASS(Blueprintable)
class PROSPECT_API UYVivoxExternalFunctions : public UObject {
    GENERATED_BODY()
public:
    UYVivoxExternalFunctions();

    UFUNCTION(BlueprintCallable)
    static bool SetActiveVoiceChatOutput(UObject* objectContext, const FString& outputDevice);
    
    UFUNCTION(BlueprintCallable)
    static bool SetActiveVoiceChatInput(UObject* objectContext, const FString& InputDevice);
    
    UFUNCTION(BlueprintCallable)
    static bool IsTransmitting(UObject* objectContext);
    
    UFUNCTION(BlueprintCallable)
    static TArray<FString> FindVoiceChatAvailableOutputDevices(UObject* objectContext);
    
    UFUNCTION(BlueprintCallable)
    static TArray<FString> FindVoiceChatAvailableInputDevices(UObject* objectContext);
    
    UFUNCTION(BlueprintCallable)
    static FString FindActiveVoiceOutputDevice(UObject* objectContext);
    
    UFUNCTION(BlueprintCallable)
    static FString FindActiveVoiceInputDevice(UObject* objectContext);
    
};

