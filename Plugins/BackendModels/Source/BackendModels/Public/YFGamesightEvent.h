#pragma once
#include "CoreMinimal.h"
#include "YGamesightIdentifier.h"
#include "YFGamesightEvent.generated.h"

USTRUCT(BlueprintType)
struct FYFGamesightEvent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Type;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString revenue_currency;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 revenue_amount;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYGamesightIdentifier identifiers;

    BACKENDMODELS_API FYFGamesightEvent();
};

