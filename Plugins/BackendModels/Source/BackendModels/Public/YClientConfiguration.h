#pragma once
#include "CoreMinimal.h"
#include "YConfigEntry.h"
#include "YClientConfiguration.generated.h"

USTRUCT(BlueprintType)
struct BACKENDMODELS_API FYClientConfiguration {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString surveyLink;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FYConfigEntry> dataTablesData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString matchmakingExchange;
    
    FYClientConfiguration();
};

