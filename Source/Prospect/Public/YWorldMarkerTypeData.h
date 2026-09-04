#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameplayTagContainer.h"
#include "Templates/SubclassOf.h"
#include "YDataTableRowBase.h"
#include "YWorldMarkerTypeData.generated.h"

class AYWorldMarkerWidgetActor;

USTRUCT(BlueprintType)
struct FYWorldMarkerTypeData : public FYDataTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag m_markerTypeTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AYWorldMarkerWidgetActor> m_markerActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bOverrideColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor m_colorOverride;
    
    PROSPECT_API FYWorldMarkerTypeData();
};

