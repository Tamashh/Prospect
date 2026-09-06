#include "YMeshMergingManager.h"

UYMeshMergingManager::UYMeshMergingManager() {
}

UYMeshMergingManager* UYMeshMergingManager::GetMeshMergingManager(const UObject* objectContext) {
    return NULL;
}

void UYMeshMergingManager::DebugRequestMerge(UObject* Outer, UPhysicsAsset* physicAsset, USkeleton* Skeleton, const TArray<USkeletalMesh*>& meshesToMerge) {
}
