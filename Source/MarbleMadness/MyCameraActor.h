// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Camera/CameraActor.h"
#include "MyCameraActor.generated.h"

/**
 * 
 */
UCLASS()
class MARBLEMADNESS_API AMyCameraActor : public ACameraActor
{
	GENERATED_BODY()

public:
	AMyCameraActor();
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	// Function to update camera position based on the marble's position
	void UpdateCameraPosition(FVector MarblePosition, float DeltaTime);

private:
	UPROPERTY(EditAnywhere, Category = "Camera Settings")
	float CameraDistance;
	UPROPERTY(EditAnywhere, Category = "Camera Settings")
	float CameraHeight;
	UPROPERTY(EditAnywhere, Category = "Camera Settings")
	float CameraSpeed;
	
};
