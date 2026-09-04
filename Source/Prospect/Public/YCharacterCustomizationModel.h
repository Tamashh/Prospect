#pragma once
#include "CoreMinimal.h"
#include "YCharacterVanity.h"
#include "UObject/Object.h"
#include "YOnCharacterVanityDataUpdatedDelegate.h"
#include "YOnCharacterVanityUpdatedDelegate.h"
#include "YCharacterCustomizationModel.generated.h"

UCLASS(Blueprintable)
class UYCharacterCustomizationModel : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYOnCharacterVanityUpdated OnCharacterUpdated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYOnCharacterVanityDataUpdated OnCharacterDataUpdated;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYCharacterVanity m_characterVanity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYCharacterVanity m_pendingCharacterVanity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FYCharacterVanity> m_persistentArchetypeToVanity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> m_ownedArchetypes;
    
public:
    UYCharacterCustomizationModel();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPendingAndPersistentEqual() const;
    
};

