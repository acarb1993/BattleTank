// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "AIController.h"
#include "TankAIController.generated.h"

/**
 * 
 */
UCLASS()
class BATTLETANK_API ATankAIController : public AAIController
{
	GENERATED_BODY()

public:
	void BeginPlay() override;

private:
	virtual void Tick(float DeltaTime) override;

	// How close can the AI Tank get
	float AcceptanceRadius = 3000; 
};
