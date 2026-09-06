#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "YMeshMergeRequest.h"
#include "YMeshMergingManager.generated.h"

class UPhysicsAsset;
class USkeletalMesh;
class USkeleton;
class UYMeshMergingManager;

UCLASS(Blueprintable)
class UYMeshMergingManager : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FYMeshMergeRequest> m_pendingMergeRequests;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYMeshMergeRequest m_currentMergeRequest;

public:
    UYMeshMergingManager();

    UFUNCTION(BlueprintCallable)
    static UYMeshMergingManager* GetMeshMergingManager(const UObject* objectContext);

    UFUNCTION(BlueprintCallable)
    void DebugRequestMerge(UObject* Outer, UPhysicsAsset* physicAsset, USkeleton* Skeleton, const TArray<USkeletalMesh*>& meshesToMerge);

};
