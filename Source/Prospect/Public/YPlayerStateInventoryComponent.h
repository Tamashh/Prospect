#pragma once
#include "CoreMinimal.h"
#include "YStateInventoryComponent.h"
#include "YPlayerStateInventoryComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PROSPECT_API UYPlayerStateInventoryComponent : public UYStateInventoryComponent {
    GENERATED_BODY()
public:
    UYPlayerStateInventoryComponent(const FObjectInitializer& ObjectInitializer);

};

