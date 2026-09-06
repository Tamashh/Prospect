#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "YFullscreenCrosshairData.h"
#include "YModInstanceGameplayAttributeModifierData.h"
#include "YModAttachEntry.h"
#include "YOverridenModInstanceData.generated.h"

class UCurveFloat;

USTRUCT(BlueprintType)
struct FYOverridenModInstanceData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle m_rowHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FYModAttachEntry> m_meshAttachments;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FYModInstanceGameplayAttributeModifierData> m_instanceAttributeMods;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle m_fxCategoryHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle m_transportHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* m_overridenRecoilCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYFullscreenCrosshairData m_crosshairData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_shouldOffsetScope;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_scopeOffset;
    
    PROSPECT_API FYOverridenModInstanceData();
};

