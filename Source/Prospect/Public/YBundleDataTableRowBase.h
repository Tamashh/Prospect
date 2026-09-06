#pragma once
#include "CoreMinimal.h"
#include "YBundleEntry.h"
#include "YDataTableRowBase.h"
#include "YItemMeshVisualization.h"
#include "YItemMeshVisualizationOverride.h"
#include "YPlatformStoreEntry.h"
#include "YStoreItemData.h"
#include "YBundleDataTableRowBase.generated.h"

USTRUCT(BlueprintType)
struct FYBundleDataTableRowBase : public FYDataTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_isPlatformBundle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYStoreItemData m_storeData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FYPlatformStoreEntry> m_platformStoresData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FYBundleEntry> m_itemCollection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FYItemMeshVisualization> m_itemMeshes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYItemMeshVisualizationOverride m_itemVisOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FYBundleEntry> m_itemPreviewCollection;

    PROSPECT_API FYBundleDataTableRowBase();
};

