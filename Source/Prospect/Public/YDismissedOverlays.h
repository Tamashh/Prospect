#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "YDismissedOverlays.generated.h"

UCLASS(Blueprintable, Config=Game)
class PROSPECT_API UYDismissedOverlays : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> m_dismissedOverlays;
    
public:
    UYDismissedOverlays();

};

