// Fill out your copyright notice in the Description page of Project Settings.

#include "EFPEAESS.h"
#include "ChooseNextWaypoint.h"


EBTNodeResult::Type UChooseNextWaypoint::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{

	UE_LOG(LogTemp, Warning, TEXT("HIYA I AM C++ Reporting in..."))

	return EBTNodeResult::Succeeded;

}
