#pragma once
#include "CoreMinimal.h"
#include "YDebugSetCompositeProgress.generated.h"

USTRUCT(BlueprintType)
struct BACKENDMODELS_API FYDebugSetCompositeProgress {
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
    
    FYDebugSetCompositeProgress();
};

