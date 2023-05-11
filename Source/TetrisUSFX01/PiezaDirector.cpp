// Fill out your copyright notice in the Description page of Project Settings.


#include "PiezaDirector.h"

// Sets default values
APiezaDirector::APiezaDirector()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void APiezaDirector::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APiezaDirector::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void APiezaDirector::ConstruirPieza()
{
	if (!PiezaConstructor) {
		UE_LOG(LogTemp, Error, TEXT("ConstructLodging(): LodgingBuilder is NULL, make sure it's initialized."));
		return;
	}
	//Creates the buildings
	PiezaConstructor->ConstruirColores();
}

void APiezaDirector::SetConstruirPieza(AActor* Constructor)
{
	PiezaConstructor = Cast<IPiezaConstructora>(Constructor);
	if (!PiezaConstructor) //Log Error if cast fails
	{
		GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Red, TEXT("Invalid Cast! See Output log for more details"));
		UE_LOG(LogTemp, Error, TEXT("SetLodgingBuilder(): The Actor is not a LodgingBuilder! Are you sure that the Actor implements that interface ? "));
	}
}

APieza* APiezaDirector::GetPieza()
{
	if (PiezaConstructor)
	{
		//Returns the Lodging of the Builder
		return PiezaConstructor->GetPieza();
	}
	//Log if the Builder is NULL
	UE_LOG(LogTemp, Error, TEXT("GetLodging(): Return nullptr"));
	return nullptr;
}

