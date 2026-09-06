#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Misc/Timespan.h"
#include "YTimeUtils.generated.h"

UCLASS(Blueprintable)
class PROSPECT_API UYTimeUtils : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UYTimeUtils();

    UFUNCTION(BlueprintCallable)
    static FText GetRemainingTimeFromTargetDateAsTextFormatted(const bool useShortText, const bool showDays, const bool showHours, const bool showMinutes, const bool showSeconds, const FString& endDateTimeUtc, FTimespan& RemainingTime);

};

