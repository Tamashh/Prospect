#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EYInitializationRequestSettingTypes.h"
#include "YInitializationCompleteDelegateDynamicDelegate.h"
#include "YInitializationRequestEntry.h"
#include "YInitializationManager.generated.h"

class AActor;

UCLASS(Blueprintable)
class YINITIALIZATIONPLUGIN_API UYInitializationManager : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, FYInitializationRequestEntry> m_requests;
    
public:
    UYInitializationManager();

    UFUNCTION(BlueprintCallable)
    static int32 RequestCompleteInitializationCallbackBlueprint(AActor* actorContext, FYInitializationCompleteDelegateDynamic Delegate, bool& outSuccess, EYInitializationRequestSettingTypes Type);
    
};

