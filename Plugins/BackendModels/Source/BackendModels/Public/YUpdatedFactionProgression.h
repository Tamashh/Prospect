#pragma once
#include "CoreMinimal.h"
#include "YUpdatedFactionProgression.generated.h"

USTRUCT(BlueprintType)
struct FYUpdatedFactionProgression {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString m_userId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString m_faction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_factionProgression;
    
    BACKENDMODELS_API FYUpdatedFactionProgression();
};

