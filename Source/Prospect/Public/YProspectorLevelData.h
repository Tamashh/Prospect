#pragma once
#include "CoreMinimal.h"
#include "YProspectorLevelData.generated.h"

USTRUCT(BlueprintType)
struct FYProspectorLevelData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_level;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_currentXP;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_xpLeftForNextLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_xpRequiredForNextLevel;
    
    PROSPECT_API FYProspectorLevelData();
};

