#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "YPlayerAbilitiesAudioData.generated.h"

USTRUCT(BlueprintType)
struct FYPlayerAbilitiesAudioData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle m_cloakStartSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle m_cloakEndSound;
    
    PROSPECT_API FYPlayerAbilitiesAudioData();
};

