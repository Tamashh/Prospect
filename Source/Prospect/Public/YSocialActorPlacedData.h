#pragma once
#include "CoreMinimal.h"
#include "YSocialActorPlacedData.generated.h"

class UYPlayerSocialComponent;

USTRUCT(BlueprintType)
struct FYSocialActorPlacedData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UYPlayerSocialComponent* m_socialComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_contextName;
    
    PROSPECT_API FYSocialActorPlacedData();
};

