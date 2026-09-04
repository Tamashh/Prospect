#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "YAIController.h"
#include "YAIBotController.generated.h"

class AActor;
class AYPlayerCharacter;
class AYPlayerController_Match;
class UYHealthComponent;

UCLASS(Blueprintable)
class AYAIBotController : public AYAIController {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVector> m_currentPath;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AYPlayerCharacter* m_controlledPlayerCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AYPlayerController_Match* m_controlledPlayerController;
    
public:
    AYAIBotController(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    bool TakeOver(AYPlayerController_Match* Controller);
    
    UFUNCTION(BlueprintCallable)
    void StopBTLogic(UYHealthComponent* healthComponent, AActor* instigatorActor);
    
    UFUNCTION(BlueprintCallable)
    bool MoveOnPath();
    
    UFUNCTION(BlueprintCallable)
    bool FindPathToLocation(FVector TargetLocation, float minLastPathfindTime);
    
    UFUNCTION(BlueprintCallable)
    bool AimAt(FVector TargetLocation, FVector2D maxError);
    
};

