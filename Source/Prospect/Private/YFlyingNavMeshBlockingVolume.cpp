#include "YFlyingNavMeshBlockingVolume.h"
#include "YFlyingNavMeshBlockingBrushComp.h"

AYFlyingNavMeshBlockingVolume::AYFlyingNavMeshBlockingVolume(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<UYFlyingNavMeshBlockingBrushComp>(TEXT("BrushComponent0"))) {
    const FProperty* p_BrushComponent = GetClass()->FindPropertyByName("BrushComponent");
    (*p_BrushComponent->ContainerPtrToValuePtr<UBrushComponent*>(this)) = (UBrushComponent*)RootComponent;
}
