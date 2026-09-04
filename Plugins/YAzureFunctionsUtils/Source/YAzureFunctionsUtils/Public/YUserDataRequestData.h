#pragma once
#include "CoreMinimal.h"
#include "YPlayfabAuthenticationContext.h"
#include "YGetUserDataRequest.h"
#include "YSetUserDataRequest.h"
#include "YUserDataRequestData.generated.h"

USTRUCT(BlueprintType)
struct YAZUREFUNCTIONSUTILS_API FYUserDataRequestData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_isServer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYPlayfabAuthenticationContext m_context;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_requestHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYGetUserDataRequest m_inGetRequest;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYSetUserDataRequest m_inSetRequest;
    
    FYUserDataRequestData();
};

