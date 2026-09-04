#pragma once
#include "CoreMinimal.h"
#include "EYTechtreeCategoryType.h"
#include "YPlayerQuarterTechTreeCategoryOpenDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FYPlayerQuarterTechTreeCategoryOpen, EYTechtreeCategoryType, Category);

