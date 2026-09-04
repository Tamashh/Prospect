#pragma once
#include "CoreMinimal.h"
#include "YRolledPerkEntry.h"
#include "YStoredRolledPerksData.generated.h"

USTRUCT(BlueprintType)
struct FYStoredRolledPerksData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FYRolledPerkEntry> m_allPerks;
    
    PROSPECT_API FYStoredRolledPerksData();
};

