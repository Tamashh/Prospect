#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EYGamePlatform.h"
#include "YPlatformFunctions.generated.h"

UCLASS(Blueprintable)
class YPLATFORMUTILS_API UYPlatformFunctions : public UObject {
    GENERATED_BODY()
public:
    UYPlatformFunctions();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsPlatformOverlayEnabled(const UObject* objectContext);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static EYGamePlatform GetCurrentlyUsedPlatform(const UObject* objectContext);
    
};

