// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "RMAIControllerBase.generated.h"

class UEAIStateTreeComponentBase;

UCLASS()
class RADICALAIMADNESS_API ARMAIControllerBase : public AAIController
{
	GENERATED_BODY()

public :

	ARMAIControllerBase();

	UFUNCTION()
	UEAIStateTreeComponentBase* GetEAIStateTreeComponent() const { return EAIStateTreeComponent; }

private:

	UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, meta = (AllowPrivateAccess = "true"))
	TObjectPtr<UEAIStateTreeComponentBase> EAIStateTreeComponent = nullptr;
};
