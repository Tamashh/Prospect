#pragma once
#include "CoreMinimal.h"
#include "YCompositeQuestProgress.generated.h"

USTRUCT(BlueprintType)
struct BACKENDMODELS_API FYCompositeQuestProgress {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString parentQuestId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString compositeName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Count;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Completed;
    
    FYCompositeQuestProgress();
};

