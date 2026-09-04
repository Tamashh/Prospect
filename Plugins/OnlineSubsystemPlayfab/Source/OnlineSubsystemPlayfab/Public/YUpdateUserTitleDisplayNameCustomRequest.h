#pragma once
#include "CoreMinimal.h"
#include "YUpdateUserTitleDisplayNameCustomRequest.generated.h"

USTRUCT(BlueprintType)
struct FYUpdateUserTitleDisplayNameCustomRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString RequestedDisplayName;
    
    ONLINESUBSYSTEMPLAYFAB_API FYUpdateUserTitleDisplayNameCustomRequest();
};

