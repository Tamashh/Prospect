#pragma once
#include "CoreMinimal.h"
#include "YOOnItemsRemovedBackendSignatureDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FYOOnItemsRemovedBackendSignature, const FString&, UserId, const TArray<FString>&, ids);

