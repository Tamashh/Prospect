#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "YScriptableWeaponComponent.generated.h"

class UYPersistentWeaponDataComponent;
class UYPlayerCharacterWeaponComponent;
class UYWeaponPlayerControllerRuntimeComponent;

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PROSPECT_API UYScriptableWeaponComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString m_weaponId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UYWeaponPlayerControllerRuntimeComponent* m_controllerWeaponRuntimeComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UYPlayerCharacterWeaponComponent* m_characterWeaponComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UYPersistentWeaponDataComponent* m_persistentWeaponDataComponent;
    
    UYScriptableWeaponComponent(const FObjectInitializer& ObjectInitializer);

};

