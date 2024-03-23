#pragma once

#include "CoreMinimal.h"
#include "StateTreeTaskBase.h"
#include "PropertyBag.h"
#include "STT_ReadParamValue.generated.h"

USTRUCT()
struct RADICALAIMADNESS_API FSTT_ReadParamValueInstanceData
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere)
	FVector Param;
};

USTRUCT(DisplayName = "STT_ReadParamValue")
struct RADICALAIMADNESS_API FSTT_ReadParamValue : public FStateTreeTaskCommonBase
{
	GENERATED_BODY()
	
	typedef FSTT_ReadParamValueInstanceData FInstanceDataType;
	
	FSTT_ReadParamValue() = default;
	
	virtual const UStruct* GetInstanceDataType() const override { return FInstanceDataType::StaticStruct(); }
	virtual EStateTreeRunStatus EnterState(FStateTreeExecutionContext& context, const FStateTreeTransitionResult& transition) const override;
	virtual void ExitState(FStateTreeExecutionContext& context, const FStateTreeTransitionResult& transition) const override;
};