#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/NetSerialization.h"
#include "YPlayerSpawnLocationInfo.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FYPlayerSpawnLocationInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector_NetQuantize m_location;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator m_rotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NotReplicated, meta=(AllowPrivateAccess=true))
    AActor* m_playerStart;
    
    PROSPECT_API FYPlayerSpawnLocationInfo();
};

