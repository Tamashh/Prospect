#pragma once
#include "CoreMinimal.h"
#include "EYChannelType.h"
#include "YMessage.h"
#include "YMutingState.h"
#include "UObject/NoExportTypes.h"
#include "YWidget.h"
#include "Types/SlateEnums.h"
#include "Styling/SlateColor.h"
#include "EYChannelContext.h"
#include "Templates/SubclassOf.h"
#include "YChatWindowStyles.h"
#include "YFeatureToggles.h"
#include "YWidget_Chat.generated.h"

class UCanvasPanel;
class UScrollBox;
class USizeBox;
class UTextBlock;
class UVerticalBox;
class UYEditableTextBox;
class UYPlayerMutelist;
class UYWidget_ChatMessage;
class UYWidget_ChatUserMenu;

UCLASS(Blueprintable, EditInlineNew, Config=Game)
class PROSPECT_API UYWidget_Chat : public UYWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYChatWindowStyles m_IsInStationSkin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYChatWindowStyles m_IsInMatchSkin;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_hideChatWhenInactive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_minDurationToKeepChatVisibleAfterMessageShown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_timeStampLastAcitivity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_chatIngameWidth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_isInMatch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* m_channelTypeTextBlock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* m_chatNotActiveText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* m_chatInputDisabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USizeBox* m_channelTypeContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UYEditableTextBox* m_inputEditableTextBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCanvasPanel* m_chatMessagesCanvasPanel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVerticalBox* m_chatMessagesVerticalBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UScrollBox* m_chatMessagesScrollBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USizeBox* m_chatSizeBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USizeBox* m_chatTextSizeBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UYWidget_ChatUserMenu* m_chatUserMenu;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D m_chatDimensionsResized;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UYWidget_ChatMessage> m_chatMessageWBPClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, EYChannelType> m_channelTypeAbbreviationMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EYChannelType, FSlateColor> m_channelTypeColorMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_editableTextBoxMaxCharacterCount;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UYPlayerMutelist* m_playerMutelistObj;
    
public:
    UYWidget_Chat();

private:
    UFUNCTION(BlueprintCallable)
    void ResizeChat(const FVector2D& newDimensions);
    
protected:
    UFUNCTION(BlueprintCallable)
    void RemoveChatChannel(const EYChannelType& ChannelType, EYChannelContext Context);
    
    UFUNCTION(BlueprintCallable)
    void RefreshChatVisibility();
    
    UFUNCTION(BlueprintCallable)
    void RefreshChatBlockingText();
    
    UFUNCTION(BlueprintCallable)
    void OnUpDownArrayPressed(bool clickedUpKey);
    
    UFUNCTION(BlueprintCallable)
    void OnTryAutoReconnect(const int32 numAttemptsLeft);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnTextCommitted(const FText& Text, TEnumAsByte<ETextCommit::Type> CommitMethod);
    
    UFUNCTION(BlueprintCallable)
    void OnTabPressed();
    
    UFUNCTION(BlueprintCallable)
    void OnShiftTabPressed();
    
    UFUNCTION(BlueprintCallable)
    void OnSettingsApplied();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnMuteStateChanged(const FYMutingState& stateChanged);
    
    UFUNCTION(BlueprintCallable)
    void OnMultiplayerMatchStateChanged(bool newState);
    
    UFUNCTION(BlueprintCallable)
    void OnMessageReceived(const FYMessage& receivedMessage);
    
    UFUNCTION(BlueprintCallable)
    void OnFeatureTogglesUpdated(const FYFeatureToggles& featureToggles);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnChatInputPressed();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnChannelTypeChanged(EYChannelType newChannelType);
    
private:
    UFUNCTION(BlueprintCallable)
    void HandleOnTextChanged(const FText& Text);
    
    UFUNCTION(BlueprintCallable)
    UYWidget_ChatMessage* CreateChatMessage(const FYMessage& receivedMessage);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_ChatMutingStateChanged(FYMutingState Data);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_ChatMessageReceived();
    
    UFUNCTION(BlueprintCallable)
    void BindChatDelegates();
    
    UFUNCTION(BlueprintCallable)
    void AddChatChannel(const EYChannelType& ChannelType, EYChannelContext Context);
    
};

