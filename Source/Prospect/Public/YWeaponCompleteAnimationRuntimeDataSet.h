#pragma once
#include "CoreMinimal.h"
#include "EYWeaponPlayState.h"
#include "YWeaponAnimationPlayRuntimeData.h"
#include "YWeaponCompleteAnimationRuntimeDataSet.generated.h"

USTRUCT(BlueprintType)
struct FYWeaponCompleteAnimationRuntimeDataSet {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EYWeaponPlayState, FYWeaponAnimationPlayRuntimeData> m_runtimeData;
    
    PROSPECT_API FYWeaponCompleteAnimationRuntimeDataSet();
};

