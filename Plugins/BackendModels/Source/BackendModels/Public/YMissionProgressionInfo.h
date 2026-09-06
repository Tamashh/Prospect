#pragma once
#include "CoreMinimal.h"
#include "YMissionProgressionInfo.generated.h"

USTRUCT(BlueprintType)
struct FYMissionProgressionInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString currentMissionID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 progress;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool receivedOnboardingWelcomePackage;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> completedMissionIds;

    BACKENDMODELS_API FYMissionProgressionInfo();
};

