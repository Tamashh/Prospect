#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "YPlayfabCommonSettings.h"
#include "YOnlineSubsystemPlayfabExternalFunctions.generated.h"

UCLASS(Blueprintable, Config=Game)
class ONLINESUBSYSTEMPLAYFAB_API UYOnlineSubsystemPlayfabExternalFunctions : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYPlayfabCommonSettings m_commonSettings;
    
    UYOnlineSubsystemPlayfabExternalFunctions();

};

