#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "YOnCharacterCustomizationDataChangedDelegate.h"
#include "YSceneCameraData.h"
#include "YSceneCameraDataAssociation.h"
#include "YSceneCameraDataRuntimeData.h"
#include "YCustomizationCameraComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PROSPECT_API UYCustomizationCameraComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYOnCharacterCustomizationDataChanged OnRuntimeCustomizationCameraStateChangedDelegate;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FYSceneCameraData> m_cameraData;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYSceneCameraDataRuntimeData m_sceneCameraDataRuntimeData;
    
public:
    UYCustomizationCameraComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetDefaultCameraState(const FYSceneCameraDataAssociation& defaultState);
    
    UFUNCTION(BlueprintCallable)
    void SetCameraSuffix(const FString& suffix, const FString& callerContext);
    
};

