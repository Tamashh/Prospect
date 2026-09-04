#pragma once
#include "CoreMinimal.h"
#include "YVOLine.generated.h"

class USoundCue;
class USoundWave;

USTRUCT(BlueprintType)
struct FYVOLine {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText m_subtitle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USoundWave> m_sound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USoundCue> m_soundCue;
    
    PROSPECT_API FYVOLine();
};

