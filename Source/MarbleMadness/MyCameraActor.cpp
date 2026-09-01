// Fill out your copyright notice in the Description page of Project Settings.


#include "MyCameraActor.h"

AMyCameraActor::AMyCameraActor()
{
	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

void AMyCameraActor::UpdateCameraPosition(FVector MarblePosition, float DeltaTime)
{
	// Implementation for updating camera position
	// TODO : Implement smooth camera movement based on MarblePosition and DeltaTime
	MarblePosition += FVector(-CameraDistance, 0.0f, CameraHeight);
}