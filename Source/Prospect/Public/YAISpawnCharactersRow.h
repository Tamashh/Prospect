#pragma once
#include "CoreMinimal.h"
#include "EYEnemyType.h"
#include "YAISpawnCharacterInfo.h"
#include "YDataTableRowBase.h"
#include "YAISpawnCharactersRow.generated.h"

USTRUCT(BlueprintType)
struct FYAISpawnCharactersRow : public FYDataTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_usePrototypeVersionByDefault;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EYEnemyType, FYAISpawnCharacterInfo> m_aiCharactersPerType;
    
    PROSPECT_API FYAISpawnCharactersRow();
};

