#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "YGrantEntry.h"
#include "YGrantRow.generated.h"

USTRUCT(BlueprintType)
struct FYGrantRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FYGrantEntry> m_grants;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_autoClaim;
    
    BACKENDMODELS_API FYGrantRow();
};

