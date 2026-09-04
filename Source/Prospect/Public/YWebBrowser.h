#pragma once
#include "CoreMinimal.h"
#include "WebBrowser.h"
#include "YWebBrowser.generated.h"

UCLASS(Blueprintable)
class PROSPECT_API UYWebBrowser : public UWebBrowser {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString m_limitDomain;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bShowInDesigner;
    
public:
    UYWebBrowser();

    UFUNCTION(BlueprintCallable)
    void Reload();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetDomainFromURL(const FString& URL);
    
};

