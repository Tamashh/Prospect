#pragma once
#include "CoreMinimal.h"
#include "Engine/GameEngine.h"
#include "YGameEngine.generated.h"

class UYEZProfileManager;

UCLASS(Blueprintable, NonTransient, Config=Engine)
class PROSPECT_API UYGameEngine : public UGameEngine {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UYEZProfileManager* m_ezProfile;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString m_uploadLLMShare;
    
public:
    UYGameEngine();

protected:
    UFUNCTION(BlueprintCallable)
    void OnSendLogsDueCrash();
    
};

