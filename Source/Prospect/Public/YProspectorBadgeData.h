#pragma once
#include "CoreMinimal.h"
#include "YProspectorBadgeData.generated.h"

USTRUCT(BlueprintType)
struct FYProspectorBadgeData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ownerID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString killedBy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString killedHow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 rank;
    
    PROSPECT_API FYProspectorBadgeData();
};

