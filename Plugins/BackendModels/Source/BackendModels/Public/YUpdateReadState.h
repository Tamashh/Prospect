#pragma once
#include "CoreMinimal.h"
#include "YUpdateReadState.generated.h"

USTRUCT(BlueprintType)
struct FYUpdateReadState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString messageId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool hasRead;
    
    BACKENDMODELS_API FYUpdateReadState();
};

