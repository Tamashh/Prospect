#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "OnSpawnImpactEmitterDelegate.h"
#include "YImpactInitializationData.h"
#include "YImpactManager.generated.h"

class UYImpactManager;

UCLASS(Blueprintable)
class UYImpactManager : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSpawnImpactEmitter BP_OnPlayImpactSound;
    
    UYImpactManager();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UYImpactManager* GetImpactManager();
    
    UFUNCTION(BlueprintCallable)
    static void ExecuteImpact(UObject* objectContext, FYImpactInitializationData initializationData);
    
};

