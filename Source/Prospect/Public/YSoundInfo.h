#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "YSoundInfo.generated.h"

class USoundBase;

USTRUCT(BlueprintType)
struct FYSoundInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* m_sound;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector m_location;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString m_context;

    PROSPECT_API FYSoundInfo();
};

