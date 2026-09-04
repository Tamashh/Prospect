#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "YPlayerMutelistEntry.h"
#include "YPlayerMutelist.generated.h"

UCLASS(Blueprintable, Config=PlayerMuteList)
class PROSPECT_API UYPlayerMutelist : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FYPlayerMutelistEntry> m_mutelist;
    
public:
    UYPlayerMutelist();

};

