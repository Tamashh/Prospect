#pragma once
#include "CoreMinimal.h"
#include "EYChannelType.h"
#include "UObject/Object.h"
#include "YChatExternalFunctions.generated.h"

class AActor;

UCLASS(Blueprintable)
class PROSPECT_API UYChatExternalFunctions : public UObject {
    GENERATED_BODY()
public:
    UYChatExternalFunctions();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsUserMuted(const FString& UserId, bool isVoice);
    
    UFUNCTION(BlueprintCallable)
    static bool IsPlayerNameMuted(AActor* actorContext, const FString& playerName, bool isVoice);
    
    UFUNCTION(BlueprintCallable)
    static FText ChannelTypeToText(UObject* objectContext, EYChannelType ChannelType);
    
};

