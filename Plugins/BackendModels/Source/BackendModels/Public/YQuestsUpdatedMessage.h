#pragma once
#include "CoreMinimal.h"
#include "YQuestState.h"
#include "YQuestsUpdatedMessage.generated.h"

USTRUCT(BlueprintType)
struct BACKENDMODELS_API FYQuestsUpdatedMessage {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString UserId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FYQuestState> quests;
    
    FYQuestsUpdatedMessage();
};

