#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "EYGameplayContextType.h"
#include "ProduceImpactHitStillAdvanceDelegate.h"
#include "YProjectileMovementComponent.generated.h"

class UYGameplayAttributesComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UYProjectileMovementComponent : public UProjectileMovementComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_acceleration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_accelerationDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_accelerationAdditionalMaxSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FProduceImpactHitStillAdvance OnImpactStillRetrace;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle m_cachedSpawnedTransportRowHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UYGameplayAttributesComponent* m_cachedGameplayAttributeComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EYGameplayContextType m_gameplayContextType;
    
    UYProjectileMovementComponent(const FObjectInitializer& ObjectInitializer);

};

