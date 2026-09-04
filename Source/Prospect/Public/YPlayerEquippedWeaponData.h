#pragma once
#include "CoreMinimal.h"
#include "EYDeviceCategory.h"
#include "EYEquipedAnimationWeaponType.h"
#include "EYEquipedWeaponPoseType.h"
#include "YPlayerEquippedWeaponData.generated.h"

USTRUCT(BlueprintType)
struct FYPlayerEquippedWeaponData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EYEquipedWeaponPoseType m_equippedWeaponPoseType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EYEquipedAnimationWeaponType m_equippedAnimationWeaponType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EYDeviceCategory m_equippedDeviceCategory;
    
    PROSPECT_API FYPlayerEquippedWeaponData();
};

