#pragma once
#include "CoreMinimal.h"
#include "YOnFetchInsuranceInvoiceDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FYOnFetchInsuranceInvoice, const TArray<FString>&, unpaidInsuredItemInstanceIds);

