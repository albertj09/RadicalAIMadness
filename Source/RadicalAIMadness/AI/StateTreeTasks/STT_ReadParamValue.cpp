#include "STT_ReadParamValue.h"
#include "Components/StateTreeComponent.h"
#include "StateTreeExecutionContext.h"
#include "Kismet/KismetMathLibrary.h"
#include "RadicalAIMadness/AI/AIControllers/RMAIControllerBase.h"

EStateTreeRunStatus FSTT_ReadParamValue::EnterState(FStateTreeExecutionContext& context, const FStateTreeTransitionResult& transition) const
{
	const FSTT_ReadParamValueInstanceData& instanceData = context.GetInstanceData<FSTT_ReadParamValueInstanceData>(*this);
	GEngine->AddOnScreenDebugMessage(-1, 10.f, FColor::Green, FString("CurrentLocation: ") + instanceData.Param.ToString());

	return EStateTreeRunStatus::Succeeded;
}

void FSTT_ReadParamValue::ExitState(FStateTreeExecutionContext& context, const FStateTreeTransitionResult& transition) const
{
	//
}
