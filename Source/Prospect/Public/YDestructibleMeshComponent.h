#pragma once
#include "CoreMinimal.h"
#include "DestructibleComponent.h"
#include "UObject/NoExportTypes.h"
#include "MeshFracturedOnChunkDelegate.h"
#include "YDestructibleMeshComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PROSPECT_API UYDestructibleMeshComponent : public UDestructibleComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMeshFracturedOnChunk OnChunkDestroyed;
    
    UYDestructibleMeshComponent(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    FVector GetRandomChunkLocation();
    
    UFUNCTION(BlueprintCallable)
    int32 GetNumChunks();
    
};

