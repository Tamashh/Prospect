#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "OnRequestDamageNumberDelegate.h"
#include "YDamageNumberData.h"
#include "YDamageNumberComponent.generated.h"

class UObject;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UYDamageNumberComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnRequestDamageNumber OnRequestDamageNumber;
    
    UYDamageNumberComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    static void AddDamageNumber(UObject* objectContext, FYDamageNumberData damageNumberData);
    
};

