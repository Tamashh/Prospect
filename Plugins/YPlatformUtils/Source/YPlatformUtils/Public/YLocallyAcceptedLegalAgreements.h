#pragma once
#include "CoreMinimal.h"
#include "YLocallyAcceptedLegalAgreements.generated.h"

USTRUCT(BlueprintType)
struct FYLocallyAcceptedLegalAgreements {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString m_userIdPlatform;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_NDAVersion;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_EULAVersion;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_hasAcceptedNDA;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_hasAcceptedEULA;
    
    YPLATFORMUTILS_API FYLocallyAcceptedLegalAgreements();
};

