#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "MeshFracturedOnChunkDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FMeshFracturedOnChunk, int32, chunkID, const FVector&, chunkLocation, const FVector&, chunkExtends);

