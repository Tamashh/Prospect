#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "YBlockableComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UYBlockableComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_isBlocked;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_canBlock;
    
public:
    UYBlockableComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void UnblockObject();
    
    UFUNCTION(BlueprintCallable)
    bool IsBlocked();
    
    UFUNCTION(BlueprintCallable)
    void BlockObject(int32 timeToBlock);
    
};

