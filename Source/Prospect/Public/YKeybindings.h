#pragma once
#include "CoreMinimal.h"
#include "YKeybindingData.h"
#include "YKeybindings.generated.h"

USTRUCT(BlueprintType)
struct FYKeybindings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FYKeybindingData> Keybindings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool HasUpdates;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsNew;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FYKeybindingData> m_addedKeybindings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FYKeybindingData> m_removedKeybindings;
    
    PROSPECT_API FYKeybindings();
};

