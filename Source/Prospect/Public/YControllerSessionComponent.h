#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "YAzureFunctionResult.h"
#include "EYPlayerMatchFinishedResult.h"
#include "EYSessionEventType.h"
#include "YFeatureToggles.h"
#include "YControllerSessionComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UYControllerSessionComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FGuid m_instanceGuid;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_initiatedTravel;
    
public:
    UYControllerSessionComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable)
    void UpdateCharacterSelectionUserDataFlag(bool Add);
    
    UFUNCTION(BlueprintCallable)
    void ShowWarningNotification();
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerReportSessionState();
    
    UFUNCTION(BlueprintCallable)
    void OnPlayfabResponseSetTutorialStarted(const FYAzureFunctionResult& azureResult);
    
    UFUNCTION(BlueprintCallable)
    void OnPlayfabResponseSetCharacterSelectionStarted(const FYAzureFunctionResult& azureResult);
    
    UFUNCTION(BlueprintCallable)
    void OnPlayfabResponseGetTutorialStarted(const FYAzureFunctionResult& azureResult);
    
    UFUNCTION(BlueprintCallable)
    void OnFinishedMatchResult(EYPlayerMatchFinishedResult Result);
    
    UFUNCTION(BlueprintCallable)
    void OnFeatureTogglesReceivedCallback(const FYFeatureToggles& newFeatureToggleStats);
    
    UFUNCTION(BlueprintCallable)
    void OnCompletedSessionState(EYSessionEventType completedType);
    
    UFUNCTION(BlueprintCallable, Client, Unreliable)
    void ClientReportSessionState(const FString& Output);
    
};

