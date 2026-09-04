#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "OnTagAddedDelegate.h"
#include "YCharacterLocationComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UYCharacterLocationComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnTagAdded BP_OnTagAdded;
    
    UYCharacterLocationComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void RemoveTag(const FName& NewRemoveTag);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasTags(const TArray<FName>& Tags) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasTag(const FName& Tag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasAtleastOneTag(const TArray<FName>& Tags) const;
    
    UFUNCTION(BlueprintCallable)
    void AddTag(const FName& newTag);
    
};

