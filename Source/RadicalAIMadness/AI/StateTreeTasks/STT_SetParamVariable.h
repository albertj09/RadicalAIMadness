#pragma once

#include "CoreMinimal.h"
#include "StateTreeTaskBase.h"
#include "PropertyBag.h"
#include "STT_SetParamVariable.generated.h"

USTRUCT(BlueprintType)
struct FMyStruct
{
	GENERATED_BODY()
	
};

USTRUCT()
struct RADICALAIMADNESS_API FSTT_SetParamVariableInstanceData
{
	GENERATED_BODY();

	float randomVal = 0.f;

	FStateTreePropertyRef
};

USTRUCT(DisplayName = "FSTT_SetParamVariable")
struct RADICALAIMADNESS_API FSTT_SetParamVariable : public FStateTreeTaskCommonBase
{
	GENERATED_BODY()
	
	typedef FSTT_SetParamVariableInstanceData FInstanceDataType;
	
	FSTT_SetParamVariable() = default;
	
	virtual const UStruct* GetInstanceDataType() const override { return FInstanceDataType::StaticStruct(); }
	virtual EStateTreeRunStatus EnterState(FStateTreeExecutionContext& context, const FStateTreeTransitionResult& transition) const override;
	virtual void ExitState(FStateTreeExecutionContext& context, const FStateTreeTransitionResult& transition) const override;
};
