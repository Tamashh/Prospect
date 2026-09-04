#pragma once
#include "CoreMinimal.h"
#include "YModEntry.h"
#include "YStoredModData.generated.h"

USTRUCT(BlueprintType)
struct FYStoredModData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FYModEntry> m_allMods;
    
    PROSPECT_API FYStoredModData();
};

