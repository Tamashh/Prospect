#pragma once
#include "CoreMinimal.h"
#include "Engine/AssetManager.h"
#include "YAssetManager.generated.h"

UCLASS(Blueprintable, Config=Game)
class UYAssetManager : public UAssetManager {
    GENERATED_BODY()
public:
    UYAssetManager();

};

