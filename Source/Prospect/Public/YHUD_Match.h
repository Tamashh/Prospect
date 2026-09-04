#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "YHUD.h"
#include "YHUD_Match.generated.h"

class UYScreenBase;

UCLASS(Blueprintable, NonTransient)
class AYHUD_Match : public AYHUD {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FToggleWidgetRequestDelegate OnToggleMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UYScreenBase> m_hudScreenClass;
    
    AYHUD_Match(const FObjectInitializer& ObjectInitializer);

};

