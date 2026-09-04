#pragma once
#include "CoreMinimal.h"
#include "OnDamageNumberRemoveDelegate.generated.h"

class UYWidget_DamageNumber;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnDamageNumberRemove, UYWidget_DamageNumber*, Widget);

