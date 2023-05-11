// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include <functional>
#include <vector>
#include "Block.h"
#include "PiezaEstructura.h"
#include "Pieza.generated.h"

UCLASS()
class TETRISUSFX01_API APieza : public AActor, public IPiezaEstructura
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	APieza();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY()   // macro que declara la variable como una variable que se puede editar en el editor de Unreal Engine.
		class USceneComponent* SceneComponent;    // declara la variable SceneComponent como un componente de escena.

	void DrawDebugLines();
	void TestRotate();
	void MoveLeft();
	void MoveRight();
	bool MoveDown(bool PlaySound = true);
	void Dismiss();
	bool CheckWillCollision(std::function<FVector(FVector OldLocation)> ChangeBeforeCheck);

	UPROPERTY(EditAnywhere)  // significa que la propiedad se puede editar tanto en el editor de Unreal Engine como en el código
		TArray<class UMaterial*> Colors;  // declara la variable Colors como un array de materiales.
private:
	TArray<ABlock*> Blocks;
	int Color;
	std::vector<std::vector<std::pair<float, float>>> Shapes =                                               // Crear una lista de piezas
	{
		{{-20.0, 0.0}, {-10.0, 0.0}, {0.0, 0.0}, {10.0, 0.0}},                                               // Pieza Linea
		{{0.0, 10.0}, {0.0, 0.0}, {10.0, 0.0}, {20.0, 0.0}},                                                 // Pieza L
		{{-20.0, 0.0}, {-10.0, 0.0}, {0.0, 0.0}, {0.0, 10.0}},                                               // Pieza L Invertida
		//{{0.0, 0.0}, {10.0, 0.0}, {0.0, -10.0}, {10.0, -10.0}},                                              // Cuadrado
		{{-10.0, -10.0}, {0.0, -10.0}, {0.0, 0.0}, {10.0, 0.0}},                                             // Pieza Z Invertida
		{{-10.0, 0.0}, {0.0, 0.0}, {0.0, 10.0}, {10.0, 0.0}},                                                // Pieza T
		//{{-10.0, 0.0}, {0.0, 0.0}, {0.0, -10.0}, {10.0, -10.0}},
		//A partir de aca, incrementare 5 piezas mas en el juego
		{{-10.0, 0.0}, {0.0, 0.0}, {10.0, 0.0}, {0.0, 10.0}, {0.0, -10.0}},                                  // Pieza Cruz
		{{-10.0, 20.0}, {-10.0, 10.0}, {-10.0, 0.0}, {0.0, 0.0}, {10.0, 0.0}, {10.0, 10.0}, {10.0, 20.0}},   // Pieza Iman
		{{0.0, 20.0}, {0.0, 10.0}, {10.0, 10.0}, {10.0, 0.0}, {20.0, 0.0}},                                  // Pieza Escalera
		{{0.0, 0.0}, {0.0, 10.0}, {10.0, 10.0}, {10.0, 20.0}, {10.0, 30.0}, {0.0, 30.0}}                     // Pieza Signo de Pregunta 
	};
public:
	void SpawnBlocks();
	void setColors(int _colors) {
		Color = _colors;
	}
	int getColors() {
		return Color;
	}
};
