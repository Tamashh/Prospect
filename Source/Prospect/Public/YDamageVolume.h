#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "GameFramework/PhysicsVolume.h"
#include "YDamageVolume.generated.h"

class UYDamageComponent;

UCLASS(Blueprintable, Config=Game)
class PROSPECT_API AYDamageVolume : public APhysicsVolume {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UYDamageComponent* YDamage;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle DamageType;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle DamageCauser;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DamageAmount;
    
    AYDamageVolume(const FObjectInitializer& ObjectInitializer);

};

