#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EYSortingRequestType.h"
#include "YSortingRequest.generated.h"

USTRUCT(BlueprintType)
struct FYSortingRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDataTableRowHandle> m_items;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString m_userId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EYSortingRequestType m_type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_sortAlphabetical;
    
    PROSPECT_API FYSortingRequest();
};

