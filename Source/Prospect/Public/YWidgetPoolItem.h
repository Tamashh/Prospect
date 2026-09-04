#pragma once
#include "CoreMinimal.h"
#include "YWidgetPoolItem.generated.h"

class UUserWidget;

USTRUCT(BlueprintType)
struct FYWidgetPoolItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUserWidget* Widget;
    
    PROSPECT_API FYWidgetPoolItem();
};

