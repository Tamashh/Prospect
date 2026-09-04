#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "YAnalyticsSender.generated.h"

UCLASS(Blueprintable, Config=Game)
class YGAMEANALYTICS_API UYAnalyticsSender : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_isShutdownInitiated;
    
public:
    UYAnalyticsSender();

};

