#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "YGameplayAttributeModifier.h"
#include "YModInstanceGameplayAttributeModifierData.generated.h"

USTRUCT(BlueprintType)
struct FYModInstanceGameplayAttributeModifierData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYGameplayAttributeModifier m_attributeModifier;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle m_gameplayAttributeVisualizationData;

    PROSPECT_API FYModInstanceGameplayAttributeModifierData();
};
