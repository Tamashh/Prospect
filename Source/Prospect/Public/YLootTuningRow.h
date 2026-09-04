#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EYLootSourceType.h"
#include "EYLootVelocityType.h"
#include "EYPickupType.h"
#include "YDataTableRowBase.h"
#include "YDespawnPickUpInfo.h"
#include "YRarityLootVelocitySettings.h"
#include "YLootTuningRow.generated.h"

class UParticleSystem;
class UStaticMesh;
class UYActorWidget;

USTRUCT(BlueprintType)
struct FYLootTuningRow : public FYDataTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EYLootSourceType, FYDespawnPickUpInfo> m_pickUpTypesToDestroyWhenNoPlayerIsClose;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_serverPickUpDestructionSafeTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_pickUpInteractionTimeDefault;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_pickUpInteractionTimeWeapon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_pickUpInteractionTimeAbility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EYLootSourceType, float> m_exclusivePickUpTimes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_autoPickupRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle m_moneyDropRow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EYPickupType, UParticleSystem*> m_highlightParticles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EYPickupType, UParticleSystem*> m_legendaryHighlightParticles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EYPickupType, FDataTableRowHandle> m_scannableRows;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UStaticMesh> m_defaultAbilityLootMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UYActorWidget> m_widgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_navMeshRandomPointInRadiusForLootDrops;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EYLootVelocityType, FYRarityLootVelocitySettings> m_lootVelocitySettings;
    
    PROSPECT_API FYLootTuningRow();
};

