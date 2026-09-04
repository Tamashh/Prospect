#pragma once
#include "CoreMinimal.h"
#include "YRoomSquad.generated.h"

USTRUCT(BlueprintType)
struct FYRoomSquad {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString squadId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> users;
    
    BACKENDMODELS_API FYRoomSquad();
};

