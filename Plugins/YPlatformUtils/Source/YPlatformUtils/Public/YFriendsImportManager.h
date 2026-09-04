#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EYFriendsImportResultCode.h"
#include "YFriendsImportManager.generated.h"

class UYFriendsImportManager;

UCLASS(Blueprintable)
class YPLATFORMUTILS_API UYFriendsImportManager : public UObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnFriendsImportResult, const EYFriendsImportResultCode, resultCode, const int32, maxFriendsLimit);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnFriendsImportResult OnFriendsImportResult;
    
    UYFriendsImportManager();

    UFUNCTION(BlueprintCallable)
    static UYFriendsImportManager* GetFriendsImportManager(const UObject* objectContext);
    
};

