#pragma once
#include "CoreMinimal.h"
#include "YQuestUpdateDataEntry.h"
#include "YSetQuestsCount.generated.h"

USTRUCT(BlueprintType)
struct BACKENDMODELS_API FYSetQuestsCount {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString UserId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FYQuestUpdateDataEntry> entries;
    
    FYSetQuestsCount();
};

