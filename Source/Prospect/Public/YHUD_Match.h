#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "YHUD.h"
#include "YHUD_Match.generated.h"

class UYScreenBase;

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FToggleWidgetRequestDelegate);

UCLASS(Blueprintable, NonTransient)
class AYHUD_Match : public AYHUD {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, meta=(AllowPrivateAccess=true))
    FToggleWidgetRequestDelegate OnToggleMap;
    
    UPROPERTY(EditDefaultsOnly, meta=(AllowPrivateAccess=true))
    TSubclassOf<UYScreenBase> m_hudScreenClass;
    
    AYHUD_Match(const FObjectInitializer& ObjectInitializer);

};

