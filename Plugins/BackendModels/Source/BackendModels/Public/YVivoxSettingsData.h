#pragma once
#include "CoreMinimal.h"
#include "YVivoxSettingsData.generated.h"

USTRUCT(BlueprintType)
struct FYVivoxSettingsData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString vivoxServer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString vivoxDomain;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString vivoxIssuer;
    
    BACKENDMODELS_API FYVivoxSettingsData();
};

