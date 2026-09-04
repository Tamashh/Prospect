#pragma once
#include "CoreMinimal.h"
#include "YPlayerConnectionData.generated.h"

USTRUCT(BlueprintType)
struct FYPlayerConnectionData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 m_ip;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_port;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString m_fullAdressString;
    
    YBATTLEEYE_API FYPlayerConnectionData();
};

