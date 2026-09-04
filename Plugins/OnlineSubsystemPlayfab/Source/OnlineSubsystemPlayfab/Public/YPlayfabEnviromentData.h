#pragma once
#include "CoreMinimal.h"
#include "YPlayfabEnviromentData.generated.h"

USTRUCT(BlueprintType)
struct FYPlayfabEnviromentData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString m_titleId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString m_developmentSecret;
    
    ONLINESUBSYSTEMPLAYFAB_API FYPlayfabEnviromentData();
};

