#pragma once
#include "CoreMinimal.h"
#include "YLevelActorContainer.h"
#include "OnMatchCameraUpdatedDelegate.h"
#include "YMatchLevelActorContainer.generated.h"

class AActor;

UCLASS(Blueprintable)
class UYMatchLevelActorContainer : public UYLevelActorContainer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMatchCameraUpdated OnMatchCameraUpdated;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* m_matchLobbyCameraActor;
    
public:
    UYMatchLevelActorContainer();

    UFUNCTION(BlueprintCallable)
    void SetMatchLobbyCameraActor(AActor* CameraActor);
    
};

