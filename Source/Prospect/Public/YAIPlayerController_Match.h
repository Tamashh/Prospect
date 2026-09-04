#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "YAIController.h"
#include "YAIPlayerController_Match.generated.h"

class UYControllerInventoryAbilityComponent;
class UYPlayerInteractionComponent;
class UYWeaponPlayerControllerInventoryComponent;
class UYWeaponPlayerControllerRuntimeComponent;

UCLASS(Blueprintable)
class AYAIPlayerController_Match : public AYAIController {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDataTableRowHandle> m_weaponToInitialize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDataTableRowHandle> m_pistolHandles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_randomizeWeaponInventory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle m_firstAbility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle m_secondAbility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle m_thirdAbility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle m_fourthAbility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_randomizeAbilities;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UYWeaponPlayerControllerRuntimeComponent* m_runtimeWeaponComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UYWeaponPlayerControllerInventoryComponent* m_inventoryWeaponController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UYControllerInventoryAbilityComponent* m_abilityInventoryComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UYPlayerInteractionComponent* m_playerInteractionComponent;
    
public:
    AYAIPlayerController_Match(const FObjectInitializer& ObjectInitializer);

};

