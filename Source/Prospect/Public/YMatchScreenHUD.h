#pragma once
#include "CoreMinimal.h"
#include "YScreenBase.h"
#include "Templates/SubclassOf.h"
#include "YMatchScreenHUD.generated.h"

UCLASS(Blueprintable)
class UYMatchScreenHUD : public UYScreenBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UYScreenBase> m_endOfMatchHUDBP;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_openEndOfMatchScreenDelay;
    
public:
    UYMatchScreenHUD();

private:
    UFUNCTION(BlueprintCallable)
    void OpenEndOfMatchScreenDelayed();
    
    UFUNCTION(BlueprintCallable)
    void OpenEndOfMatchScreen();
    
};

