#include "YMatchPhaseFunctionsLibrary.h"

#include "Engine/World.h"
#include "Kismet/KismetMathLibrary.h"
#include "Misc/CommandLine.h"
#include "Misc/Parse.h"
#include "UObject/UnrealType.h"

UYMatchPhaseFunctionsLibrary::UYMatchPhaseFunctionsLibrary() {
}

FString UYMatchPhaseFunctionsLibrary::FindMatchFlowToUse(UObject* WorldContext) {
    if (WorldContext) {
        if (UWorld* World = WorldContext->GetWorld()) {
            if (World->URL.HasOption(TEXT("MatchFlow="))) {
                return World->URL.GetOption(TEXT("MatchFlow="), TEXT("Default"));
            }

            FString MatchFlow;
            if (FParse::Value(FCommandLine::Get(), TEXT("MatchFlow="), MatchFlow, true)) {
                return MatchFlow;
            }
        }
    }

    return TEXT("Default");
}

bool UYMatchPhaseFunctionsLibrary::BlendMatchPhaseVisualRow(FDataTableRowHandle fromPhaseHandle, FDataTableRowHandle toPhaseHandle, float Alpha, FYMatchPhaseVisualRow& outRow) {
    static const TCHAR* Context = TEXT("UYMatchPhaseFunctionsLibrary::BlendMatchPhaseVisualRow");
    const FYMatchPhaseVisualRow* FromRow = fromPhaseHandle.GetRow<FYMatchPhaseVisualRow>(Context);
    const FYMatchPhaseVisualRow* ToRow = toPhaseHandle.GetRow<FYMatchPhaseVisualRow>(Context);
    if (!FromRow || !ToRow) {
        return false;
    }

    return BlendMatchPhaseVisualData(*FromRow, *ToRow, Alpha, outRow);
}

bool UYMatchPhaseFunctionsLibrary::BlendMatchPhaseVisualData(FYMatchPhaseVisualRow fromVisualData, FYMatchPhaseVisualRow toVisualData, float Alpha, FYMatchPhaseVisualRow& outRow) {
    for (TFieldIterator<FProperty> PropertyIt(FYMatchPhaseVisualRow::StaticStruct(), EFieldIteratorFlags::IncludeSuper); PropertyIt; ++PropertyIt) {
        FProperty* Property = *PropertyIt;

        if (FBoolProperty* BoolProperty = CastField<FBoolProperty>(Property)) {
            BoolProperty->SetPropertyValue_InContainer(
                &outRow,
                BoolProperty->GetPropertyValue_InContainer(&toVisualData));
            continue;
        }

        if (FFloatProperty* FloatProperty = CastField<FFloatProperty>(Property)) {
            const float FromValue = FloatProperty->GetPropertyValue_InContainer(&fromVisualData);
            const float ToValue = FloatProperty->GetPropertyValue_InContainer(&toVisualData);
            FloatProperty->SetPropertyValue_InContainer(
                &outRow,
                UKismetMathLibrary::Ease(
                    FromValue,
                    ToValue,
                    Alpha,
                    EEasingFunc::EaseInOut,
                    2.0f,
                    2));
            continue;
        }

        if (FStructProperty* StructProperty = CastField<FStructProperty>(Property)) {
            if (StructProperty->Struct == TBaseStructure<FLinearColor>::Get()) {
                const FLinearColor* FromValue = StructProperty->ContainerPtrToValuePtr<FLinearColor>(&fromVisualData);
                const FLinearColor* ToValue = StructProperty->ContainerPtrToValuePtr<FLinearColor>(&toVisualData);
                FLinearColor* OutValue = StructProperty->ContainerPtrToValuePtr<FLinearColor>(&outRow);
                *OutValue = FMath::Lerp(*FromValue, *ToValue, Alpha);
            }
            continue;
        }

        if (CastField<FObjectPropertyBase>(Property) || CastField<FNameProperty>(Property)) {
            Property->CopyCompleteValue_InContainer(&outRow, &toVisualData);
        }
    }

    return true;
}


