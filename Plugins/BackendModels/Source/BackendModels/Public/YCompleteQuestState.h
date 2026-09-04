#pragma once
#include "CoreMinimal.h"
#include "YQuestState.h"
#include "YCompleteQuestState.generated.h"

USTRUCT(BlueprintType)
struct FYCompleteQuestState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYQuestState questState;
    
    BACKENDMODELS_API FYCompleteQuestState();
};

