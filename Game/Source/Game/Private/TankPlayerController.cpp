// Fill out your copyright notice in the Description page of Project Settings.

#include "../Public/TankPlayerController.h"
#include "../Public/Tank.h"
#include "../TankHelper.h"



void ATankPlayerController::BeginPlay()
{
	Super::BeginPlay();

	auto tank = TankHelper::GetTank(this);
	if (tank == nullptr)
	{
		UE_LOG(LogTemp, Warning, TEXT("PlayerController not processing a Tank"));
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("==============Tank=================  %s"),*(tank->GetName()));
	}	

	tank = TankHelper::GetAPawn<ATank>(this);
	if (tank == nullptr)
	{
		UE_LOG(LogTemp, Warning, TEXT("PlayerController not processing a Tank"));
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("==============Tank=================  %s"), *(tank->GetName()));
	}

}

