#pragma once
#include "CoreMinimal.h"
#include "YSelectedEmote.generated.h"

USTRUCT(BlueprintType)
struct FYSelectedEmote {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_activeEmoteIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_selectedEmoteTimeStamp;
    
    PROSPECT_API FYSelectedEmote();
};

