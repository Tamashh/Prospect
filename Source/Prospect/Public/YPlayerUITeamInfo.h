#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "YPlayerUITeamInfo.generated.h"

USTRUCT(BlueprintType)
struct FYPlayerUITeamInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FColor m_teamColorID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_teamID;
    
    PROSPECT_API FYPlayerUITeamInfo();
};

