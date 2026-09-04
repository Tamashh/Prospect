#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "Templates/SubclassOf.h"
#include "YScreenManager.generated.h"

class UYScreenBase;

UCLASS(Blueprintable)
class SCREENSYSTEM_API UYScreenManager : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<TSubclassOf<UYScreenBase>, UYScreenBase*> m_activeScreens;
    
public:
    UYScreenManager();

    UFUNCTION(BlueprintCallable)
    UYScreenBase* RequestScreen(TSubclassOf<UYScreenBase> screenClass, bool clearRemainingScreen);
    
};

