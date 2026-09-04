#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "YLocallyAcceptedLegalAgreements.h"
#include "YLegalAgreementsManager.generated.h"

class UYLegalAgreementsManager;

UCLASS(Blueprintable, Config=LegalAgreementsManager)
class YPLATFORMUTILS_API UYLegalAgreementsManager : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FYLocallyAcceptedLegalAgreements> m_locallyAcceptedLegalAgreements;
    
public:
    UYLegalAgreementsManager();

    UFUNCTION(BlueprintCallable)
    static UYLegalAgreementsManager* GetLegalAgreementsManager(const UObject* objectContext);
    
};

