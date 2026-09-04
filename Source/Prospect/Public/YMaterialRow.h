#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "YActorUIWidgetData.h"
#include "YItemDataTableRowBase.h"
#include "YItemPickUpLightData.h"
#include "YMaterialRow.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FYMaterialRow : public FYItemDataTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> m_hudIconBig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYActorUIWidgetData m_uiWidgetData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText m_materialLocationDescription;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYItemPickUpLightData m_pickUpLightData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle m_pickUpSoundRowHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_isAlienForgeLotteryTicket;
    
    PROSPECT_API FYMaterialRow();
};

