#pragma once
#include "CoreMinimal.h"
#include "OnJiraTicketCreatedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnJiraTicketCreated, const bool, bSuccess, const FString&, JiraKey);

