#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "YFilterWordEntry.h"
#include "YChatFilterDataObject.generated.h"

UCLASS(Blueprintable)
class YCHATFILTERINGPLUGIN_API UYChatFilterDataObject : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FYFilterWordEntry> m_cachedWords;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FYFilterWordEntry> m_regexWords;
    
    UYChatFilterDataObject();

};

