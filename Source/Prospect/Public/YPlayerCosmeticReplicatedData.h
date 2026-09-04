#pragma once
#include "CoreMinimal.h"
#include "YActiveWeaponCharacterInitializationData.h"
#include "YPlayerCosmeticReplicatedData.generated.h"

USTRUCT(BlueprintType)
struct FYPlayerCosmeticReplicatedData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYActiveWeaponCharacterInitializationData m_initData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NotReplicated, meta=(AllowPrivateAccess=true))
    int32 m_selectedWeaponSlot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_isActive;
    
    PROSPECT_API FYPlayerCosmeticReplicatedData();
};

