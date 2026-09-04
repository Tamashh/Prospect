#pragma once
#include "CoreMinimal.h"
#include "YDamageNumberEntry.generated.h"

class UYWidget_DamageNumber;

USTRUCT(BlueprintType)
struct FYDamageNumberEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UYWidget_DamageNumber* m_widget;
    
    PROSPECT_API FYDamageNumberEntry();
};

