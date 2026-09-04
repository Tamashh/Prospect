#pragma once
#include "CoreMinimal.h"
#include "YVanityItemRowBase.h"
#include "YSprayVanityItemRowBase.generated.h"

class USoundBase;

USTRUCT(BlueprintType)
struct FYSprayVanityItemRowBase : public FYVanityItemRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USoundBase> m_sound;
    
    PROSPECT_API FYSprayVanityItemRowBase();
};

