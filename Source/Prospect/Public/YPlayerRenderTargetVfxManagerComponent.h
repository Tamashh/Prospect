#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "YPlayerRenderTargetVfxManagerComponent.generated.h"

class UObject;
class UYPlayerRenderTargetVfxManagerComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UYPlayerRenderTargetVfxManagerComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UYPlayerRenderTargetVfxManagerComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UYPlayerRenderTargetVfxManagerComponent* GetPlayerRenderTargetVfxManager(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void DrawToPlayerRenderTargetVfxManager(UObject* WorldContextObject, FVector position, float Size, float Opacity);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_DrawToPlayerRenderTargetVfxManager(FVector position, float Size, float Opacity);
    
};

