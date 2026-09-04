#pragma once
#include "CoreMinimal.h"
#include "EYSortingRequestType.h"
#include "YVanityItemData.h"
#include "YSortingVanityRequest.generated.h"

USTRUCT(BlueprintType)
struct FYSortingVanityRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FYVanityItemData> m_vanityItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString m_userId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EYSortingRequestType m_type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_sortAlphabetical;
    
    PROSPECT_API FYSortingVanityRequest();
};

