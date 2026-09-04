#pragma once
#include "CoreMinimal.h"
#include "EYLoginResult.h"
#include "YScreenBase.h"
#include "Templates/SubclassOf.h"
#include "YMenuScreenDisconnected.generated.h"

UCLASS(Blueprintable)
class UYMenuScreenDisconnected : public UYScreenBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UYScreenBase> m_entryScreenBP;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UYScreenBase> m_homeScreenBP;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UYScreenBase> m_legalAgreementsScreenBP;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UYScreenBase> m_clientUpdateScreenBP;
    
public:
    UYMenuScreenDisconnected();

protected:
    UFUNCTION(BlueprintCallable)
    void OnClientUpdate();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsRecoverableError(EYLoginResult Result) const;
    
    UFUNCTION(BlueprintCallable)
    void HandleLoginResponse(EYLoginResult Result);
    
};

