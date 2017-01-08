// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Components/StaticMeshComponent.h"
#include "TankBarrel.generated.h"

/**
 * Holds Parameters for barrels properties and elevate method
 */
UCLASS(meta = (BlueprintSpawnableComponent), hidecategories = ("Collision")) // Makes it so you can add this via blueprint and hides collsion properties.
class BATTLETANK_API UTankBarrel : public UStaticMeshComponent
{
	GENERATED_BODY()
	
public:
	// -1 is max downward speed and +1 is max upward speed.
	void Elevate(float RelativeSpeed);

private:
	UPROPERTY(EditAnywhere, Category = BarrelSetup)
		float MaxDegreesPerSecond = 10; 
	
	UPROPERTY(EditAnywhere, Category = BarrelSetup)
		float MaxElevationDegrees = 20;

	UPROPERTY(EditAnywhere, Category = BarrelSetup)
		float MinElevationDegrees = 0; //sensible default. Would like it to go to -10 just while facing forwards.

};
