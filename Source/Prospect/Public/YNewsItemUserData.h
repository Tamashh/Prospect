#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "YNewsItemUserData.generated.h"

USTRUCT(BlueprintType)
struct FYNewsItemUserData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString m_id;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_seen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_read;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDateTime m_lastUpdate;
    
    PROSPECT_API FYNewsItemUserData();
};

