#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "YWeaponLocationOffsetData.generated.h"

USTRUCT(BlueprintType)
struct FYWeaponLocationOffsetData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector m_offsetLocaton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector m_overrideDirectionMovement;
    
    PROSPECT_API FYWeaponLocationOffsetData();
};

