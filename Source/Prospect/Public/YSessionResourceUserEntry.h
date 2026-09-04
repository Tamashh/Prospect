#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "YSessionResourceUserEntry.generated.h"

USTRUCT(BlueprintType)
struct FYSessionResourceUserEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString m_userId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid m_instanceId;
    
    PROSPECT_API FYSessionResourceUserEntry();
};

