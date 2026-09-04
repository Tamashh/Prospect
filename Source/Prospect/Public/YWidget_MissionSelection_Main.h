#pragma once
#include "CoreMinimal.h"
#include "YMissionState.h"
#include "YMissionUpdateDataEntry.h"
#include "YWidget.h"
#include "YWidget_MissionSelection_Main.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class PROSPECT_API UYWidget_MissionSelection_Main : public UYWidget {
    GENERATED_BODY()
public:
    UYWidget_MissionSelection_Main();

    UFUNCTION(BlueprintCallable)
    void SetMissionActive(const FString& missionArcId, const FString& missionId, bool newState);
    
    UFUNCTION(BlueprintCallable)
    void SetMissionAcknowledged(const FString& missionArcId, const FString& missionId);
    
    UFUNCTION(BlueprintCallable)
    void ResetMission(const FString& missionArcId, const FString& missionId);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnMissionsDataReceivedCallback(const FString& UserId, const TArray<FYMissionUpdateDataEntry>& missionEntries);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnMissionDataReceived(const TArray<FYMissionState>& missionStates);
    
    UFUNCTION(BlueprintCallable)
    void LeaveScreen();
    
};

