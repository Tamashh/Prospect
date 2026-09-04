#pragma once
#include "CoreMinimal.h"
#include "YScreenBase.h"
#include "Templates/SubclassOf.h"
#include "YMatchScreenSpectator.generated.h"

UCLASS(Blueprintable)
class UYMatchScreenSpectator : public UYScreenBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UYScreenBase> m_eomScreenBP;
    
public:
    UYMatchScreenSpectator();

private:
    UFUNCTION(BlueprintCallable)
    void OpenEndOfMatchScreen();
    
};

