#pragma once
#include "CoreMinimal.h"
#include "YQuestUpdateDataEntry.generated.h"

USTRUCT(BlueprintType)
struct BACKENDMODELS_API FYQuestUpdateDataEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString questId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString backendId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Count;
    
    FYQuestUpdateDataEntry();
};

