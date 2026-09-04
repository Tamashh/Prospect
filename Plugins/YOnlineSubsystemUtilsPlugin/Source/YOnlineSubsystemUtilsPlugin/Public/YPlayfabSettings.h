#pragma once
#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "EYPlayfabEnvironment.h"
#include "EYPlayfabLoginType.h"
#include "YPlayfabSettings.generated.h"

UCLASS(Blueprintable, Config=YDeveloperSettings)
class YONLINESUBSYSTEMUTILSPLUGIN_API UYPlayfabSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_enabled;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    EYPlayfabEnvironment m_playfabEnvironment;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    EYPlayfabLoginType m_playfabLoginType;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString m_username;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString m_password;
    
    UYPlayfabSettings();

};

