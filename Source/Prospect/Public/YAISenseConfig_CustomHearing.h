#pragma once
#include "CoreMinimal.h"
#include "Perception/AISenseConfig.h"
#include "Templates/SubclassOf.h"
#include "YAISenseConfig_CustomHearing.generated.h"

class UYAISense_CustomHearing;

UCLASS(Blueprintable, EditInlineNew, Config=Engine)
class UYAISenseConfig_CustomHearing : public UAISenseConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, NoClear, meta=(AllowPrivateAccess=true))
    TSubclassOf<UYAISense_CustomHearing> Implementation;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_hearingRange;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_noiseEventRangeMultiplier;

    UYAISenseConfig_CustomHearing();

};
