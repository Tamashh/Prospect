#pragma once
#include "CoreMinimal.h"
#include "YWeaponModsConvertHelper.generated.h"

USTRUCT(BlueprintType)
struct FYWeaponModsConvertHelper {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> m_mods;
    
    PROSPECT_API FYWeaponModsConvertHelper();
};

