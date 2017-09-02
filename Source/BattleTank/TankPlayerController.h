// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Tank.h"
#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "TankPlayerController.generated.h" //must be the last include



/**
 * 
 */
UCLASS()
class BATTLETANK_API ATankPlayerController : public APlayerController //ATankPlayerController class based on a APlayerController.
{
	GENERATED_BODY()
	
public:
	ATank* GetControlledTank() const; //(getter method)const because it wont need to change any member variables of ATankPlayerController class.

	virtual void BeginPlay() override; //( BeginPlay()from AActor) virtual keyword (V) in the API means that it can overriden.

									   // Called every frame
	virtual void Tick(float DeltaTime) override; //override checks that there is a method like: Tick(float DeltaTime) in the parent class or parent-parent-etc class.


	
private:

	//Start the tank moving the barrel so that a shot would hit
	//where crosshair intersect the world
	void AimTowardsCrosshair();

	//Return an OUT parameter, true if hit landscape

	bool GetSightRayHitLocation(FVector & OutHitLocation) const; //mutating or changing an FVector. A reference to FVector

	
};
