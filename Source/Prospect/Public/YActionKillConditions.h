#pragma once
#include "CoreMinimal.h"
#include "EYDeviceCategory.h"
#include "Engine/DataTable.h"
#include "EYEnemyType.h"
#include "EYKillTypeAction.h"
#include "YActionKillConditions.generated.h"

USTRUCT(BlueprintType)
struct FYActionKillConditions {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EYKillTypeAction m_killTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EYDeviceCategory> m_allowedWeaponCategories;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDataTableRowHandle> m_allowedSpecificWeapons;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EYEnemyType m_specificAIEnemyTypeToKill;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString m_mapName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_onlyDuringStorm;
    
    PROSPECT_API FYActionKillConditions();
};

