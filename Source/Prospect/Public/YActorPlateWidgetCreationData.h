#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "YWidgetActorPlateInitializationData.h"
#include "YActorPlateWidgetCreationData.generated.h"

class UYWidget_ActorPlate;

USTRUCT(BlueprintType)
struct FYActorPlateWidgetCreationData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UYWidget_ActorPlate> m_widgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYWidgetActorPlateInitializationData m_initializationData;
    
    PROSPECT_API FYActorPlateWidgetCreationData();
};

