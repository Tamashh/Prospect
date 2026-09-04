#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EYTransponderMode.h"
#include "YPersistentWeaponDataComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PROSPECT_API UYPersistentWeaponDataComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<EYTransponderMode> m_transponderModesActive;
    
    UYPersistentWeaponDataComponent(const FObjectInitializer& ObjectInitializer);

};

