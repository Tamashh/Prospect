#pragma once
#include "CoreMinimal.h"
#include "EYScopeType.h"
#include "YDataTableRowBase.h"
#include "YModInstanceGameplayAttributeModifierData.h"
#include "YScopeTuningRow.generated.h"

USTRUCT(BlueprintType)
struct FYScopeTuningRow : public FYDataTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EYScopeType m_scopeType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText m_scopeMagnificationAmountName;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText m_scopeDisplayName;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ShouldCreateGlint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_shouldReticleTrackSocket;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_disableVisionModificationOnTargeting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_shootAtCenterWhenADS;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FYModInstanceGameplayAttributeModifierData> m_instanceAttributeMods;
    
    PROSPECT_API FYScopeTuningRow();
};

