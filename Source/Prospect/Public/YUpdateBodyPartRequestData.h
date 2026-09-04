#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EYCharacterItemColumnType.h"
#include "EYCustomizationPreviewScreen.h"
#include "YUpdateBodyPartRequestData.generated.h"

USTRUCT(BlueprintType)
struct FYUpdateBodyPartRequestData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle m_baseHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_materialIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EYCharacterItemColumnType m_requestType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString m_archetypeID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_forceIgnoreBackendDebug;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EYCustomizationPreviewScreen m_sourceOfChange;
    
    PROSPECT_API FYUpdateBodyPartRequestData();
};

