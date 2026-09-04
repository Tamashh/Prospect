#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/Interface.h"
#include "UObject/NoExportTypes.h"
#include "YActivityActorInterface.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class UYActivityActorInterface : public UInterface {
    GENERATED_BODY()
};

class IYActivityActorInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    FVector GetDrawDebugLineTo();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    FColor GetDrawDebugLineColor();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    FString GetDebugDescription();
    
};

