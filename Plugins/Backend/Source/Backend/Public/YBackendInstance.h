#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "YBackendInstance.generated.h"

class UYPlayfabInstance;

UCLASS(Blueprintable)
class BACKEND_API UYBackendInstance : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UYPlayfabInstance* m_playfabInstance;
    
    UYBackendInstance();

    UFUNCTION(BlueprintCallable)
    void OnPlayfabServerLogin(bool succeded, const FString& loginError, const FString& playfabTitleId);
    
};

