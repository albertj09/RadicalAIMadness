// Fill out your copyright notice in the Description page of Project Settings.


#include "RMAIControllerBase.h"
#include "RadicalAIMadness/AI/EAIStateTreeComponentBase.h"

ARMAIControllerBase::ARMAIControllerBase()
{
	EAIStateTreeComponent = CreateDefaultSubobject<UEAIStateTreeComponentBase>(TEXT("EAIStateTreeComponent"));
}
