#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "YInboxFunctionsLibrary.generated.h"

UCLASS(Blueprintable)
class PROSPECT_API UYInboxFunctionsLibrary : public UObject {
    GENERATED_BODY()
public:
    UYInboxFunctionsLibrary();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static bool HasClaimedAllAttachedGrants(UObject* WorldContext, const FString& Guid, const FString& contextString, bool logError);
    
};

