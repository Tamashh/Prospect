#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "YWidgetUpdateInitializeData.generated.h"

class AActor;
class UUserWidget;

USTRUCT(BlueprintType)
struct FYWidgetUpdateInitializeData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_zOrder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* m_actorToInitializeFor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UUserWidget> m_widgetClass;
    
    PROSPECT_API FYWidgetUpdateInitializeData();
};

