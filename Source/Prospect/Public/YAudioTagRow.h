#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "YDataTableRowBase.h"
#include "YAudioTagRow.generated.h"

class USoundBase;

USTRUCT(BlueprintType)
struct FYAudioTagRow : public FYDataTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, USoundBase*> m_sounds;
    
    PROSPECT_API FYAudioTagRow();
};

