// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "TankAIController.generated.h"

/**
 * 
 */
UCLASS()
class BATTLETANK_API ATankAIController : public AAIController
{
	GENERATED_BODY()
protected:
	//how close can the tank go to the player before fires
	UPROPERTY(EditAnywhere, Category = "Setup") // Consider EditDefaultsOnly
	float AcceptanceRadius = 8000;

private:
		virtual void BeginPlay() override;

		virtual void SetPawn(APawn* InPawn) override;

		virtual void Tick(float DeltaTime) override;

		UFUNCTION()
		void OnPossedTankDeath();
};
