#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "YWidget.h"
#include "EYMapLayerIndex.h"
#include "YWidget_MapMarker.generated.h"

class UTextBlock;
class UYMapMarkerData;

UCLASS(Blueprintable, EditInlineNew)
class PROSPECT_API UYWidget_MapMarker : public UYWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EYMapLayerIndex m_zOrderIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UYMapMarkerData* m_markerInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* m_distanceText;
    
    UYWidget_MapMarker();

protected:
    UFUNCTION(BlueprintCallable)
    void CalculateLocalDistanceTowardsPlayer();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnUpdateMarkerData(UYMapMarkerData* markerInfo);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnTimeUpdated(float DeltaTime);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnReturnToWidgetPool();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnMaximized(bool IsMaximized);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_MapDimentions(const FVector2D worldCapturedBounds, const FVector2D pixelSize);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_ApplyScale(const float zoomLevel);
    
};

