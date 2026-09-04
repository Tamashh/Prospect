#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "YGenericItemPreviewActor.generated.h"

UCLASS(Blueprintable)
class AYGenericItemPreviewActor : public AActor {
    GENERATED_BODY()
public:
    AYGenericItemPreviewActor(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_AssetsLoaded();
    
public:
    UFUNCTION(BlueprintCallable)
    void AsyncLoadAssets(const TArray<FSoftObjectPath>& asyncLoadPaths);
    
private:
    UFUNCTION(BlueprintCallable)
    void AssetsLoaded();
    
};

