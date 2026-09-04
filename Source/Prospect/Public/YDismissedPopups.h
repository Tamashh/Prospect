#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "YDismissedPopups.generated.h"

UCLASS(Blueprintable, Config=Game)
class PROSPECT_API UYDismissedPopups : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> m_dismissedPopups;
    
public:
    UYDismissedPopups();

};

