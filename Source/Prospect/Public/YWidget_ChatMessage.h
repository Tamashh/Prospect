#pragma once
#include "CoreMinimal.h"
#include "EYChannelType.h"
#include "YMessage.h"
#include "YWidget.h"
#include "YWidget_ChatMessage.generated.h"

class URichTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class PROSPECT_API UYWidget_ChatMessage : public UYWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URichTextBlock* m_richTextBlock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText m_chatMessageFormattedRichText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EYChannelType, FString> m_channelTypeStyleMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString m_userNameStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString m_messageStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString m_cachedPlayerName;
    
public:
    UYWidget_ChatMessage();

    UFUNCTION(BlueprintCallable)
    void SetChatData(const FYMessage& Message);
    
    UFUNCTION(BlueprintCallable)
    void OnMessageClicked();
    
};

