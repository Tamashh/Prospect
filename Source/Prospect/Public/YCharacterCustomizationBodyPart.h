#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "YCharacterCustomizationBodyPart.generated.h"

USTRUCT(BlueprintType)
struct FYCharacterCustomizationBodyPart {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle m_rowHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_materialVariation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_specifiedRandomizedMesh;
    
    PROSPECT_API FYCharacterCustomizationBodyPart();
};

