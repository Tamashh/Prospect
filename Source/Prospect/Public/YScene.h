#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "EYSceneState.h"
#include "YInputStackInterface.h"
#include "YSceneCompleteInitializationData.h"
#include "YSceneRuntimeData.h"
#include "YSceneRuntimeInitializationData.h"
#include "YScene.generated.h"

class AYCharacterCustomizationExplicitCustomizationActor;
class UYWidget;

UCLASS(Blueprintable)
class PROSPECT_API AYScene : public AActor, public IYInputStackInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYSceneRuntimeInitializationData m_sceneRuntimeInitializationData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYSceneRuntimeData m_runtimeData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYSceneCompleteInitializationData m_completeData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EYSceneState m_currentState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UYWidget* m_activeWidget;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AYCharacterCustomizationExplicitCustomizationActor* m_characterCustomizationActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EYSceneState, AActor*> m_overrideCameraActors;
    
public:
    AYScene(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    bool SetSceneState(EYSceneState State, bool ForceRefresh);
    
    UFUNCTION(BlueprintCallable)
    void SetOverrideCameraActor(EYSceneState sceneState, AActor* CameraActor);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRotationDeltaChanged(const FVector2D& rotationDelta);
    
    UFUNCTION(BlueprintCallable)
    void OnFinishedLoadingWidget();
    
public:
    UFUNCTION(BlueprintCallable)
    AActor* GetCameraActor();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void BP_UnInitialize();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void BP_SceneChanged(EYSceneState sceneState);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    AActor* BP_RetrieveFallbackCameraActor();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnFinishedLoadingWidget();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void BP_Initialize(const FYSceneRuntimeInitializationData& sceneRuntimeInitializationData);
    

    // Fix for true pure virtual functions not being implemented
};

