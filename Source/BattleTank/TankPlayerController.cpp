// Fill out your copyright notice in the Description page of Project Settings.


#include "BattleTank.h"
#include "TankPlayerController.h"

void ATankPlayerController::BeginPlay()
{
	Super::BeginPlay();
	auto ControlledTank = GetControlledTank();
	if (!ControlledTank)
	{
		UE_LOG(LogTemp, Warning, TEXT("PlayerController not possesing a tank"));
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("PlayerController possesing: %s"), *(ControlledTank->GetName( )));
	}
	
}


ATank* ATankPlayerController::GetControlledTank() const
{
	return Cast<ATank>(GetPawn());
	

	
									// Cast to a type ATank the Pawn.  
}									//The Tank is a special case of a pawn.
									//Returning the pawn that the player is possesing(TankPlayerController needs to know what Tank it si controlling.





