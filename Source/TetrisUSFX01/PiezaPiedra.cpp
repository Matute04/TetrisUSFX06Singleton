// Fill out your copyright notice in the Description page of Project Settings.


#include "PiezaPiedra.h"
#include "Pieza.h"

// Sets default values
APiezaPiedra::APiezaPiedra()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void APiezaPiedra::BeginPlay()
{
	Super::BeginPlay();
	//Spawn the Lodging Actors
	Pieza = GetWorld()->SpawnActor<APieza>(APieza::StaticClass());
	//Attach it to the Builder (this)
	Pieza->AttachToActor(this, FAttachmentTransformRules::KeepRelativeTransform);
}

// Called every frame
void APiezaPiedra::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void APiezaPiedra::ConstruirColores()
{
	Pieza->setColors(2);
}

APieza* APiezaPiedra::GetPieza()
{
	return Pieza;
}

