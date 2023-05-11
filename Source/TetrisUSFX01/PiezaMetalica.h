// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PiezaConstructora.h"
#include "PiezaMetalica.generated.h"

UCLASS()
class TETRISUSFX01_API APiezaMetalica : public AActor, public IPiezaConstructora
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	APiezaMetalica();
private:
	//The Lodging Actor
	UPROPERTY()
		class APieza* Pieza;
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	virtual void ConstruirColores() override;
	virtual class APieza* GetPieza() override;
};
