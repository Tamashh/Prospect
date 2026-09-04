#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "Engine/DataTable.h"
#include "Templates/SubclassOf.h"
#include "YAITuningBuffAlliesTuning.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FYAITuningBuffAlliesTuning : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDataTableRowHandle> m_perks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_buffCooldown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_buffRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> m_buffClasses;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_buffExcludeSelf;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_buffInterrupDamage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_buffInterrupTime;
    
    PROSPECT_API FYAITuningBuffAlliesTuning();
};

