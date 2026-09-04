#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "YEzProfileInitializationData.h"
#include "YEzProfileRuntimeData.h"
#include "YEZProfileManager.generated.h"

class UYEZProfileManager;

UCLASS(Blueprintable, Transient, Config=Engine)
class YEZPROFILE_API UYEZProfileManager : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString m_uploadShare;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYEzProfileInitializationData m_initializationData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYEzProfileRuntimeData m_runtimeData;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_defaultEZProfileTime;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_defaultEZNetProfileTime;
    
    UYEZProfileManager();

    UFUNCTION(BlueprintCallable)
    static bool StartEZProfile(const UObject* objCtx, UYEZProfileManager* Instance, const FYEzProfileInitializationData& initializationData);
    
};

