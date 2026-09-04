#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "YChatFilterExternalFunctions.generated.h"

class UYChatFilterDataObject;

UCLASS(Blueprintable)
class YCHATFILTERINGPLUGIN_API UYChatFilterExternalFunctions : public UObject {
    GENERATED_BODY()
public:
    UYChatFilterExternalFunctions();

    UFUNCTION(BlueprintCallable)
    static bool ContainsProfanity(UYChatFilterDataObject* Data, const FString& inString, FString& outString);
    
};

