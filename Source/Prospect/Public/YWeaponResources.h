#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "YWeaponAnimations.h"
#include "YWeaponResources.generated.h"

UCLASS(Blueprintable)
class UYWeaponResources : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FYWeaponAnimations> m_animationsPerWeaponRowName;
    
    UYWeaponResources();

};

