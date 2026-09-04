#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "YMapMarkerData.h"
#include "YAreaMapMarkerData.generated.h"

UCLASS(Blueprintable)
class UYAreaMapMarkerData : public UYMapMarkerData {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float m_searchRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float m_randAngleRad;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float m_randRadius;
    
public:
    UYAreaMapMarkerData();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void SetSearchRadius(const float Radius);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetSearchRadius() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector2D GetRandomizedScreenOffset(const float mapScaleValue) const;
    
};

