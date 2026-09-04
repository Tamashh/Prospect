#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EYBackendValidation.h"
#include "YBackendControllerLibrary.generated.h"

UCLASS(Blueprintable)
class UYBackendControllerLibrary : public UObject {
    GENERATED_BODY()
public:
    UYBackendControllerLibrary();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool isConnected(const UObject* objectContext);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString FindUniqueId(UObject* objectContext, EYBackendValidation validation);
    
};

