#pragma once
#include "CoreMinimal.h"
#include "EYDeviceClass.h"
#include "EYItemType.h"
#include "Engine/DataAsset.h"
#include "Engine/DataTable.h"
#include "YItemSortingSettingsDataAsset.generated.h"

UCLASS(Blueprintable)
class PROSPECT_API UYItemSortingSettingsDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDataTableRowHandle> m_itemSortingLayers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EYItemType> m_itemTypeSortingOrder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EYDeviceClass> m_deviceClassSortingOrder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_itemTypeReverseOrder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_alphabeticalReverseOrder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_rarityReverseOrder;
    
    UYItemSortingSettingsDataAsset();

};

