// Fill out your copyright notice in the Description page of Project Settings.

#include "BattleTank.h"
#include "TankAIController.h"

void ATankAIController::BeginPlay()
{
	Super::BeginPlay();
	auto PlayerTank = GetPlayerTank();
	if (!(GetWorld()->GetFirstPlayerController()))
	{
		UE_LOG(LogTemp, Warning, TEXT("AIController not getting the Player Tank"));
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("AIController found the player: %s"), *(PlayerTank->GetName()));
	}

}

ATank * ATankAIController::GetPlayerTank() const
{
	
	auto PlayerTankPawn = GetWorld()->GetFirstPlayerController()->GetPawn();
	if (!PlayerTankPawn)
	{
		return nullptr;
	}
	else
	{
		return Cast<ATank>(PlayerTankPawn);
	}
	
}


ATank* ATankAIController::GetControlledTank() const
{
	return Cast<ATank>(GetPawn());
  
}


