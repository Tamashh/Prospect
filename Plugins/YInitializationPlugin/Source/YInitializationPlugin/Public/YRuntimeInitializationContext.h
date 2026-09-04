#pragma once
#include "CoreMinimal.h"
#include "EYInitializationRequestSettingTypes.h"
#include "YRuntimeInitializationContext.generated.h"

class APawn;
class APlayerController;
class APlayerState;

USTRUCT(BlueprintType)
struct YINITIALIZATIONPLUGIN_API FYRuntimeInitializationContext {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APlayerController* m_controller;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APlayerState* m_playerState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APawn* m_pawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString m_userId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString m_additionalInitializedDebugString;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_isAdditionalIntialized;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EYInitializationRequestSettingTypes m_requestSettingType;
    
    FYRuntimeInitializationContext();
};

