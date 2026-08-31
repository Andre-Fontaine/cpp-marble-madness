// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "InputActionValue.h"
#include "MyMarble.generated.h"

class UInputAction;
class UStaticMeshComponent;

UCLASS()
class MARBLEMADNESS_API AMyMarble : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	AMyMarble();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	//***** Enhanced Inputs *****
	UPROPERTY(EditAnywhere, Category = Input)
	UInputAction* MoveAction;


	//***** Callbacks for Enhanced Inputs *****
	void Move(const FInputActionValue& Value);

private:
	//***** Components *****
	UPROPERTY(VisibleAnywhere)
	UStaticMeshComponent* MeshComponent;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
