#pragma once
#include "CoreMinimal.h"
#include "EYTwitchDropToastReponseType.h"
#include "YCustomItemInfo.h"
#include "YTwitchDropsClaimPackageResult.generated.h"

USTRUCT(BlueprintType)
struct FYTwitchDropsClaimPackageResult {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString UserId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FYCustomItemInfo> GrantedItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EYTwitchDropToastReponseType responseType;
    
    BACKENDMODELS_API FYTwitchDropsClaimPackageResult();
};

