#pragma once
#include "CoreMinimal.h"
#include "YPlayFabPlayerProfile.generated.h"

USTRUCT(BlueprintType)
struct FYPlayFabPlayerProfile {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString AvatarUrl;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString DisplayName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString PlayerId;
    
    BACKENDMODELS_API FYPlayFabPlayerProfile();
};

