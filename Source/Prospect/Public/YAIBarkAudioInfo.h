#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "YAIBarkAudioInfo.generated.h"

USTRUCT(BlueprintType)
struct FYAIBarkAudioInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle m_barkSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_barkIntervalMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_barkIntervalMax;
    
    PROSPECT_API FYAIBarkAudioInfo();
};

