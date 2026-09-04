#pragma once
#include "CoreMinimal.h"
#include "YMissionRuntimeData.h"
#include "YWidgetProvider.h"
#include "YWidgetProvider_Missions.generated.h"

UCLASS(Blueprintable)
class UYWidgetProvider_Missions : public UYWidgetProvider {
    GENERATED_BODY()
public:
    UYWidgetProvider_Missions();

    UFUNCTION(BlueprintCallable)
    void SetMissionLineStepCompleted(const int32& missionStepUniqueID);
    
    UFUNCTION(BlueprintCallable)
    void SetMissionCompleted(const int32& missionStepIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetActiveStepInfo(FYMissionRuntimeData& stepInfo) const;
    
    UFUNCTION(BlueprintCallable)
    void AddMissionLineStep(const FYMissionRuntimeData& uiMissionLineStepInfo);
    
};

