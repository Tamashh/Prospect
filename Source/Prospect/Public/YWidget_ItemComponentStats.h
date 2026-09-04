#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EYItemStatsState.h"
#include "YWidget_ItemComponentBase.h"
#include "YWidget_ItemComponentStats.generated.h"

class UCanvasPanel;
class UYButton;
class UYWidget_ItemComponentStatsContainer;

UCLASS(Blueprintable, EditInlineNew)
class UYWidget_ItemComponentStats : public UYWidget_ItemComponentBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_detailStatisticsEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UYWidget_ItemComponentStatsContainer* m_activeBaseStatsWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCanvasPanel* m_canvasPanelStats;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCanvasPanel* m_canvasPanelDetailStats;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UYButton* m_simpleStatsButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UYButton* m_detailStatisticsButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EYItemStatsState m_statsState;
    
public:
    UYWidget_ItemComponentStats();

    UFUNCTION(BlueprintCallable)
    void SetStatsVisualizationState(EYItemStatsState State);
    
    UFUNCTION(BlueprintCallable)
    void OnFinishedAsyncloadingItemDisplay(FDataTableRowHandle rowHandle);
    
};

