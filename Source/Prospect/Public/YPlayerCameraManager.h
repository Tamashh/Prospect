#pragma once
#include "CoreMinimal.h"
#include "Camera/PlayerCameraManager.h"
#include "YPlayerCameraManager.generated.h"

class AActor;
class UYPlayerCameraFoVComponent;

UCLASS(Blueprintable, NonTransient, Config=Game)
class AYPlayerCameraManager : public APlayerCameraManager {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UYPlayerCameraFoVComponent* m_fovComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* m_currentViewTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_runCollisionCheck;
    
public:
    AYPlayerCameraManager(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void RemoveViewTargetLock();
    
};

