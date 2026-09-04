#pragma once
#include "CoreMinimal.h"
#include "EYModificationSlotType.h"
#include "YWeaponSuitableMods.generated.h"

USTRUCT(BlueprintType)
struct FYWeaponSuitableMods {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> m_modNames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EYModificationSlotType m_modificationSlotType;
    
    PROSPECT_API FYWeaponSuitableMods();
};

