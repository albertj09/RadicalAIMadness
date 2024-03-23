#include "STT_SetParamVariable.h"
#include "StateTreeExecutionContext.h"
#include "Kismet/KismetMathLibrary.h"
#include "RadicalAIMadness/AI/EAIStateTreeComponentBase.h"
#include "RadicalAIMadness/AI/AIControllers/RMAIControllerBase.h"

EStateTreeRunStatus FSTT_SetParamVariable::EnterState(FStateTreeExecutionContext& context, const FStateTreeTransitionResult& transition) const
{
	FSTT_SetParamVariableInstanceData& instanceData = context.GetInstanceData<FSTT_SetParamVariableInstanceData>(*this);
	ARMAIControllerBase* aiController = Cast<ARMAIControllerBase>(context.GetOwner());

	if(aiController)
	{
		if(UEAIStateTreeComponentBase* stateTreeComp = aiController->GetEAIStateTreeComponent())
		{
			const FStateTreeReference& stateTreeRef = stateTreeComp->GetStateTreeReference();
			if(stateTreeRef.IsValid())
			{
				instanceData.randomVal = UKismetMathLibrary::RandomFloatInRange(0, 100);
				
				FInstancedPropertyBag mutableParams = stateTreeRef.GetMutableParameters();
				
				mutableParams.SetValueStruct(FName("CurrentLocation"), FVector(100, 100, 100));
				mutableParams.SetValueFloat(FName("RandomFloatTest"), instanceData.randomVal);
				
				context.SetParameters(mutableParams);
			}
		}
	}
	
	return EStateTreeRunStatus::Succeeded;
}

void FSTT_SetParamVariable::ExitState(FStateTreeExecutionContext& context, const FStateTreeTransitionResult& transition) const
{
	//
}
