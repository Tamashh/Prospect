#pragma once
#include "CoreMinimal.h"
#include "EYServerCommand.h"
#include "YServerCommand.generated.h"

USTRUCT(BlueprintType)
struct FYServerCommand {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EYServerCommand Command;
    
    BACKENDMODELS_API FYServerCommand();
};

