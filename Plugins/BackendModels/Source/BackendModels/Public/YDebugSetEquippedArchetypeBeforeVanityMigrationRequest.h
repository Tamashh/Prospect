#pragma once
#include "CoreMinimal.h"
#include "YCharacterVanity.h"
#include "YDebugSetEquippedArchetypeBeforeVanityMigrationRequest.generated.h"

USTRUCT(BlueprintType)
struct FYDebugSetEquippedArchetypeBeforeVanityMigrationRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYCharacterVanity desiredVanity;

    BACKENDMODELS_API FYDebugSetEquippedArchetypeBeforeVanityMigrationRequest();
};
