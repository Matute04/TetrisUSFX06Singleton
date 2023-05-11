// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PiezaConstructora.h"
#include "PiezaPiedra.generated.h"

UCLASS()
class TETRISUSFX01_API APiezaPiedra : public AActor, public IPiezaConstructora
{
	GENERATED_BODY()
private:
	//The Lodging Actor
	UPROPERTY()
		class APieza* Pieza;
public:	
	// Sets default values for this actor's properties
	APiezaPiedra();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	virtual void ConstruirColores() override;
	virtual class APieza* GetPieza() override;
};
