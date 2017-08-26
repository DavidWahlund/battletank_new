// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Tank.h"
#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "AIController.h"
#include "TankAIController.generated.h"

/**
 * 
 */
UCLASS()
class BATTLETANK_API ATankAIController : public AAIController
{
	GENERATED_BODY()

public: //stays public if I want to inherit from this class.
	ATank* GetControlledTank() const; //(getter method)const because it wont need to change any member variables of ATankPlayerController class.

	virtual void BeginPlay() override; //( BeginPlay()from AActor) virtual keyword (V) in the API means that it can overriden.

	ATank* GetPlayerTank() const; //returning const. not changing anything. 


	
	
	
	
};
