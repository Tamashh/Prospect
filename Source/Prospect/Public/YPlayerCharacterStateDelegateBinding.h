#pragma once
#include "CoreMinimal.h"
#include "YActivateStateBlueprintDelegate.h"
#include "YActivateStateDelegate.h"
#include "YDeActivateStateBlueprintDelegate.h"
#include "YDeActivateStateDelegate.h"
#include "YPlayerCharacterStateDelegateBinding.generated.h"

USTRUCT(BlueprintType)
struct FYPlayerCharacterStateDelegateBinding {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYDeActivateState OnStateDeActivated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYActivateState OnStateActivated;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FYActivateStateBlueprint> m_activationDelegates;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FYDeActivateStateBlueprint> m_deactivationDelegates;
    
    PROSPECT_API FYPlayerCharacterStateDelegateBinding();
};

