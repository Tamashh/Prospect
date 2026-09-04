#pragma once
#include "CoreMinimal.h"
#include "YScreenBase.h"
#include "Templates/SubclassOf.h"
#include "YMenuScreenHome.generated.h"

UCLASS(Blueprintable)
class UYMenuScreenHome : public UYScreenBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UYScreenBase> m_clientUpdateScreenBP;
    
public:
    UYMenuScreenHome();

protected:
    UFUNCTION(BlueprintCallable)
    void ScreenWidgetLoaded();
    
    UFUNCTION(BlueprintCallable)
    void OnClientUpdateResponse();
    
};

