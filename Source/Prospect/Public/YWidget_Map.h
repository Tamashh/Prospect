#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "YWidget.h"
#include "EYMapMarkerType.h"
#include "Templates/SubclassOf.h"
#include "YWidget_Map.generated.h"

class UCanvasPanel;
class UImage;
class UMaterial;
class UMaterialInstanceDynamic;
class UMaterialInterface;
class UTexture;
class UTextureRenderTarget2D;
class UYMapMarkerData;
class UYWidgetPool;
class UYWidget_MapMarker;

UCLASS(Blueprintable, EditInlineNew)
class PROSPECT_API UYWidget_Map : public UYWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTextureRenderTarget2D* m_levelTextureRender;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D m_maximizedSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D m_minimapSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_minimapViewportSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fogOfWarUncoverSmoothEdge;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_playersSeeingRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_maximizedByDefault;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_orientationPictureVisible;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_allowUserInput;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* m_minimapMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCanvasPanel* m_mapCanvas;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCanvasPanel* m_projectionCanvas;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCanvasPanel* m_fullscreenCanvas;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* m_mapBackground;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* m_imageOrientationIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_hideCursor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_isFogOfWarActive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_cachedRotationAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTextureRenderTarget2D* m_fogOfWarMaskRenderTarget2D;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterial* m_fogOfWarDrawMaskMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* m_fogOfWarDrawMaskMaterialInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* m_fogOfWarTextureMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_minimizedAutoZoomLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_maximizedAutoZoomLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_isMaximized;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<EYMapMarkerType, TSubclassOf<UYWidget_MapMarker>> m_widgetTypeToClassMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TMap<UYMapMarkerData*, UYWidget_MapMarker*> m_widgetMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSubclassOf<UYWidget_MapMarker> m_defaultMapMarkerType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UYWidgetPool* m_widgetPool;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTexture* m_levelTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_borderIconOffsetFactor;
    
public:
    UYWidget_Map();

    UFUNCTION(BlueprintCallable)
    void ToggleMaximize();
    
    UFUNCTION(BlueprintCallable)
    void ShowMaximizedMap(bool IsMaximized, bool animate);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetZoom(float zoom);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_SetZoom(float Scale);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnProjectionSizeChangeRequest(bool IsMaximized);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_IsMaximized(bool newState);
    
};

