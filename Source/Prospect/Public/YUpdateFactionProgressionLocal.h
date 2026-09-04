#pragma once
#include "CoreMinimal.h"
#include "YUpdateFactionProgressionLocal.generated.h"

USTRUCT(BlueprintType)
struct FYUpdateFactionProgressionLocal {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString m_faction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_factionProgression;
    
    PROSPECT_API FYUpdateFactionProgressionLocal();
};

