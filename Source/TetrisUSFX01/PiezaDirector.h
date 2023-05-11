// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PiezaConstructora.h"
#include "PiezaDirector.generated.h"

UCLASS()
class TETRISUSFX01_API APiezaDirector : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	APiezaDirector();
private:
	IPiezaConstructora* PiezaConstructor;
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	void ConstruirPieza();
	void SetConstruirPieza(AActor* Constructor);
	class APieza* GetPieza();
};
