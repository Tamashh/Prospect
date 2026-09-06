#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/CollisionProfile.h"
#include "Engine/LatentActionManager.h"
#include "NavigationData.h"
#include "EThreadSubdivisions.h"
#include "FlyingNavGenerationFinishedEventDelegate.h"
#include "FlyingNavSystemTypes.h"
#include "SVOQuerySettings.h"
#include "FlyingNavigationData.generated.h"

class UObject;

UCLASS(Blueprintable, NotPlaceable, Config=Engine)
class FLYINGNAVSYSTEM_API AFlyingNavigationData : public ANavigationData {
    GENERATED_BODY()
public:
    UPROPERTY(Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    double MaxDetailSize;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bMultithreaded: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    EThreadSubdivisions ThreadSubdivisions;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxThreads;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bUseAgentRadius: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bUseExclusiveBounds: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bUsePreciseExclusiveBounds: 1;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCollisionProfileName> m_ignoreCollisionProfiles;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bBuildOnBeginPlay: 1;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSVOQuerySettings DefaultQuerySettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bDrawOctreeNodes: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bDrawOctreeSubNodes: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bDrawOnlyOverlappedSubNodes: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bColourByConnected: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NodeMargin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WireThickness;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bDrawNeighbourConnections: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bDrawSimplifiedConnections: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NodeCentreRadius;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFlyingNavGenerationFinishedEvent OnFlyingNavGenerationFinished;
    
    UPROPERTY(Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 m_memoryLimitMBForMapCheck;

    AFlyingNavigationData(const FObjectInitializer& ObjectInitializer);

    virtual void Serialize(FArchive& Ar) override;

    UFUNCTION(BlueprintCallable)
    void StopRebuild();
    
    UFUNCTION(BlueprintCallable)
    void RebuildNavigationData();
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo", WorldContext="WorldContextObject"))
    void RebuildFlyingNavigation(UObject* WorldContextObject, FLatentActionInfo LatentInfo);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool OctreeRaycast(const FVector& RayStart, const FVector& RayEnd, FVector& HitLocation) const;
    
    UFUNCTION(BlueprintCallable)
    void LogMemoryUsageCompact();
    
    UFUNCTION(BlueprintCallable)
    void LogMemoryUsage();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsNavigationDataBuilt() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float CurrentlyBuiltVoxelSize() const;
    
    UFUNCTION(BlueprintCallable)
    void CompactMemory();

    FSVOData& GetSVOData();
    const FSVOData& GetSVOData() const;

private:
    // Preserve the original 1.0.12 native class layout. These bytes contain
    // runtime-only delegates and locks in the shipping plugin.
    uint8 NativeStateBeforeSVOData[0x40];
    TSharedRef<FSVOData, ESPMode::ThreadSafe> SVOData;
    TSharedRef<FSVOData, ESPMode::ThreadSafe> BuildingSVOData;
    uint32 SerializationVersion;
    uint8 NativeStateAfterSerializationVersion[0x8C];
};

