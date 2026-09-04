#pragma once
#include "CoreMinimal.h"
#include "EYDamageApplication.h"
#include "YAbilityActionDataTableRow.h"
#include "YAbilityActionHealWardData.generated.h"

class UMaterialInstance;

USTRUCT(BlueprintType)
struct FYAbilityActionHealWardData : public FYAbilityActionDataTableRow {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_healPerSecond;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_healWardFinalRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_attachToOwner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_isDestructable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstance* m_healwardMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EYDamageApplication m_application;
    
    PROSPECT_API FYAbilityActionHealWardData();
};

