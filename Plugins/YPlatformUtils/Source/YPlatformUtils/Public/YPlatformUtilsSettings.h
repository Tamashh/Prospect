#pragma once
#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "YPlatformUtilsSettings.generated.h"

UCLASS(Blueprintable, Config=YDeveloperSettings)
class YPLATFORMUTILS_API UYPlatformUtilsSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_enableLegalAgreementsInPIE;
    
    UYPlatformUtilsSettings();

};

