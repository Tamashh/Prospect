#pragma once
#include "CoreMinimal.h"
#include "YSelectPlayerStart.generated.h"

class AController;
class UWorld;

USTRUCT(BlueprintType)
struct FYSelectPlayerStart {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString m_incommingName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UClass* m_defaultPawnClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWorld* m_world;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AController* Player;
    
    PROSPECT_API FYSelectPlayerStart();
};

