#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "Engine/DataTable.h"
#include "YCharacterCustomizationCheatFunctions.generated.h"

class AActor;

UCLASS(Blueprintable)
class UYCharacterCustomizationCheatFunctions : public UObject {
    GENERATED_BODY()
public:
    UYCharacterCustomizationCheatFunctions();

    UFUNCTION(BlueprintCallable)
    static void YDebugChangeActiveCharacterCustomizationBodyPart(AActor* actorContext, FDataTableRowHandle desiredRowHandle, int32 MaterialIndex, bool isTemporary, bool ignoreBackend);
    
};

