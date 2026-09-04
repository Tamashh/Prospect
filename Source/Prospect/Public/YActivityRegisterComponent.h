#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "OnActivityComponentAddedDelegate.h"
#include "YActivityRegisterComponent.generated.h"

class UYActivityComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UYActivityRegisterComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UYActivityComponent*> m_spawnedActivityComponents;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnActivityComponentAdded BP_OnActivityComponentAdded;
    
    UYActivityRegisterComponent(const FObjectInitializer& ObjectInitializer);

};

