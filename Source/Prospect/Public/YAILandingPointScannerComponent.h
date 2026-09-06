#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Math/Rotator.h"
#include "Math/Vector2D.h"
#include "Components/ActorComponent.h"
#include "Templates/SubclassOf.h"
#include "YAILandingPointScannerComponent.generated.h"

class ANavigationData;
class UNavigationQueryFilter;

UCLASS(Blueprintable, ClassGroup=Custom, Config=Engine, meta=(BlueprintSpawnableComponent))
class PROSPECT_API UYAILandingPointScannerComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_autoDetectNavigationData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ANavigationData* m_navigationData;

    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UNavigationQueryFilter> m_filterClass;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_landingPointRadius;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_searchRadius;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_numberOfPointsToCheckInCircle;
    
    UYAILandingPointScannerComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    bool FindLandingPointUnderLocation(const FVector& Location, FVector& outLandingLocation, float zExtent, bool DebugDraw);
    
    UFUNCTION(BlueprintCallable)
    int32 FindLandingPointsByOffsets(const FVector& fromLocation, const TArray<FVector2D>& Offsets, const FRotator& OffsetRotation, int32 searchLimit, TArray<FVector>& outLandingPointLocations, bool DebugDraw);
    
};

