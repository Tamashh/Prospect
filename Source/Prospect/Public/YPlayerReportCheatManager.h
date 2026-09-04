#pragma once
#include "CoreMinimal.h"
#include "YCheatManagerExtension.h"
#include "YPlayerReportCheatManager.generated.h"

UCLASS(Blueprintable)
class UYPlayerReportCheatManager : public UYCheatManagerExtension {
    GENERATED_BODY()
public:
    UYPlayerReportCheatManager();

    UFUNCTION(BlueprintCallable, Exec)
    void YDebugSendPlayerReport(FName mainReason, FName subReason) const;
    
};

