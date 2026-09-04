#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "YDragStateData.h"
#include "YOnControllerDropStateChangedDelegate.h"
#include "YControllerDropComponent.generated.h"

class AActor;
class UDragDropOperation;
class UYControllerDropComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PROSPECT_API UYControllerDropComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYOnControllerDropStateChanged OnDropStateChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYDragStateData m_currentState;
    
    UYControllerDropComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    static UYControllerDropComponent* FindDropComponent(AActor* actorContext);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool FindDragStateData(AActor* actorContext, FYDragStateData& outData);
    
    UFUNCTION(BlueprintCallable)
    static void EnableDragging(AActor* actorContext, UDragDropOperation* Payload);
    
    UFUNCTION(BlueprintCallable)
    static void DisableDragging(AActor* actorContext);
    
};

