#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "YGameplayAttributeModifier.h"
#include "YItemDataTableRowBase.h"
#include "YBagDataTableRow.generated.h"

USTRUCT(BlueprintType)
struct FYBagDataTableRow : public FYItemDataTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_weightLimit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_socket;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_audioBagType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FYGameplayAttributeModifier> m_attributeModifiers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDataTableRowHandle> m_perks;
    
    PROSPECT_API FYBagDataTableRow();
};

