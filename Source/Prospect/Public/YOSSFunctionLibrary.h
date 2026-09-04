#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "YOSSFunctionLibrary.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnPlayerIdQueryDone, const FString&, givenPlayerNetId, const FString&, foundPlayerNetId, const FString&, foundPlayerName);

UCLASS(Blueprintable)
class PROSPECT_API UYOSSFunctionLibrary : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(meta=(AllowPrivateAccess=true))
    FOnPlayerIdQueryDone OnPlayerIdQueryDone;
    
    UYOSSFunctionLibrary();

};

