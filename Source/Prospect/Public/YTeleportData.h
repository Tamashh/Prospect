#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "YTeleportData.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FYTeleportData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector m_oldLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector m_newLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* m_relevantActor;
    
    PROSPECT_API FYTeleportData();
};

