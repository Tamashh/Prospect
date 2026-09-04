#pragma once
#include "CoreMinimal.h"
#include "YScreenBase.h"
#include "Templates/SubclassOf.h"
#include "YMenuScreenHomeSubScreen.generated.h"

UCLASS(Blueprintable)
class UYMenuScreenHomeSubScreen : public UYScreenBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UYScreenBase> m_entryScreenBP;
    
    UYMenuScreenHomeSubScreen();

    UFUNCTION(BlueprintCallable)
    void OnClientDisconnect();
    
};

