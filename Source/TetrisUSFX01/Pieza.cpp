// Fill out your copyright notice in the Description page of Project Settings.


#include "Pieza.h"
#include "Components/SceneComponent.h"
#include "Kismet/GameplayStatics.h"
#include "DrawDebugHelpers.h"
#include <vector>

// Sets default values
APieza::APieza()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
    SceneComponent = CreateDefaultSubobject<USceneComponent>("Pieces Scene");   // Crear un componente de escena
    RootComponent = SceneComponent;                                             // Establecer el componente de escena como el componente raíz

    struct FConstructorStatics
    {
        ConstructorHelpers::FObjectFinderOptional<UMaterial> Color_0;           // Cargar los materiales 
        ConstructorHelpers::FObjectFinderOptional<UMaterial> Color_1;
        ConstructorHelpers::FObjectFinderOptional<UMaterial> Color_2;
        ConstructorHelpers::FObjectFinderOptional<UMaterial> Color_3;
        ConstructorHelpers::FObjectFinderOptional<UMaterial> Color_4;
        ConstructorHelpers::FObjectFinderOptional<UMaterial> Color_5;
        ConstructorHelpers::FObjectFinderOptional<UMaterial> Color_6;
        ConstructorHelpers::FObjectFinderOptional<UMaterial> Color_7;
        ConstructorHelpers::FObjectFinderOptional<UMaterial> Color_8;
        ConstructorHelpers::FObjectFinderOptional<UMaterial> Color_9;
        ConstructorHelpers::FObjectFinderOptional<UMaterial> Color_10;
        FConstructorStatics()                                                   // "F" indica que es una estructura de datos de la biblioteca básica de Unreal Engine.
            : Color_0(TEXT("Material'/Game/StarterContent/Materials/M_Tech_Hex_Tile_Pulse.M_Tech_Hex_Tile_Pulse'"))       // Cargar los materiales del unreal
            , Color_1(TEXT("Material'/Game/StarterContent/Materials/M_Metal_Chrome.M_Metal_Chrome'"))
            , Color_2(TEXT("Material'/Game/StarterContent/Materials/M_CobbleStone_Pebble.M_CobbleStone_Pebble'"))
            , Color_3(TEXT("Material'/Game/StarterContent/Materials/M_Metal_Gold.M_Metal_Gold'"))
            , Color_4(TEXT("Material'/Game/StarterContent/Materials/M_Water_Lake.M_Water_Lake'"))
            , Color_5(TEXT("Material'/Game/Mesh/Material_0.Material_0'"))
            , Color_6(TEXT("Material'/Game/Mesh/Material_1.Material_1'"))
            , Color_7(TEXT("Material'/Game/Mesh/Material_3.Material_3'"))
            , Color_8(TEXT("Material'/Game/Mesh/Material_6.Material_6'"))
            , Color_9(TEXT("Material'/Game/Mesh/Material_8.Material_8'"))
            , Color_10(TEXT("Material'/Game/StarterContent/Materials/M_Basic_Wall.M_Basic_Wall'"))
        {
        }
    };
    static FConstructorStatics ConstructorStatics;  						  // Instanciar la estructura de datos FConstructorStatics
    Colors.Add(ConstructorStatics.Color_0.Get());  					          // Agregar los materiales a la lista de materiales
    Colors.Add(ConstructorStatics.Color_1.Get());
    Colors.Add(ConstructorStatics.Color_2.Get());
    Colors.Add(ConstructorStatics.Color_3.Get());
    Colors.Add(ConstructorStatics.Color_4.Get());
    Colors.Add(ConstructorStatics.Color_5.Get());
    Colors.Add(ConstructorStatics.Color_6.Get());
    Colors.Add(ConstructorStatics.Color_7.Get());
    Colors.Add(ConstructorStatics.Color_8.Get());
    Colors.Add(ConstructorStatics.Color_9.Get());
    Colors.Add(ConstructorStatics.Color_10.Get());
}

// Called when the game starts or when spawned
void APieza::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void APieza::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}
void APieza::SpawnBlocks()
{
    const int Index = FMath::RandRange(0, Shapes.size() - 1);               // Generar un número aleatorio entre 0 y el tamaño de la lista de piezas
    //const int Index = FMath::RandRange(7, Shapes.size() - 1);             // Generar un número aleatorio entre 7 y el tamaño de la lista de piezas para mostrar las 5 piezas creadas
    UE_LOG(LogTemp, Warning, TEXT("index=%d"), Index);  				    // Imprimir el número aleatorio generado
    const std::vector<std::pair<float, float>>& YZs = Shapes[Index];        // Obtener la pieza correspondiente al número aleatorio generado
    for (auto&& YZ : YZs)  												    // Iterar sobre la pieza
    {
        int color = Index;
        switch (getColors())
        {
        case 0:
            color = 0;
            break;
        case 1:
            color = 1;
            break;
        case 2:
            color = 2;
            break;
        case 3:
            color = 3;
            break;
        case 4:
            color = 4;
            break;
        case 5:
            color = FMath::RandRange(5, Shapes.size() - 1);
            break;
        default:
            break;
        }
 
        FRotator Rotation(0.0, 0.0, 0.0);  								    // Rotación de la pieza
        ABlock* B = GetWorld()->SpawnActor<ABlock>(this->GetActorLocation(), Rotation);  // Instanciar un bloque
        B->BlockMesh->SetMaterial(1, Colors[color]);  					    // Asignar el material correspondiente al bloque
        Blocks.Add(B);  												    // Agregar el bloque a la lista de bloques
        B->AttachToActor(this, FAttachmentTransformRules::KeepRelativeTransform);  	    // Asignar la pieza como padre del bloque
        B->SetActorRelativeLocation(FVector(0.0, YZ.first, YZ.second));  	            // Asignar la posición del bloque
    }
}
void APieza::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
    UE_LOG(LogTemp, Warning, TEXT("Piezas eliminadas"));
}
void APieza::DrawDebugLines()
{
    for (ABlock* B : Blocks)
    {
        FVector V1 = B->GetActorLocation();
        FVector V2(V1.X, V1.Y, 5.0f);
        DrawDebugLine(GetWorld(), V1, V2, FColor::Green, false, 1, 0, 1);
    }
}

void APieza::TestRotate()
{
    auto RotateVector = [this](FVector OldVector) {
        FVector ActorVector = this->GetActorLocation();
        FVector BlockVector = OldVector;
        FVector TempVector = BlockVector - ActorVector;
        TempVector = ActorVector + TempVector.RotateAngleAxis(90.0, FVector(1.0, 0.0, 0.0));
        return TempVector;
    };

    if (!CheckWillCollision(RotateVector))
    {
        UE_LOG(LogTemp, Warning, TEXT("now can rotate"));
        FRotator NewRotation = this->GetActorRotation() + FRotator(0.0, 0.0, -90.0);
        this->SetActorRelativeRotation(NewRotation);
        /*if (RotateSoundCue)
        {
            UGameplayStatics::PlaySoundAtLocation(GetWorld(), RotateSoundCue, GetActorLocation(), GetActorRotation());
        }*/
    }
}

void APieza::MoveLeft()
{
    auto MoveVectorLeft = [](FVector OldVector) {
        OldVector.Y -= 10.0f;
        return OldVector;
    };

    if (!CheckWillCollision(MoveVectorLeft))
    {
        FVector NewLocation = GetActorLocation();
        NewLocation.Y -= 10;
        SetActorLocation(NewLocation);

        /* if (MoveLeftRightSoundCue)
         {
             UGameplayStatics::PlaySoundAtLocation(GetWorld(), MoveLeftRightSoundCue, GetActorLocation(), GetActorRotation());
         }*/
    }
}

void APieza::MoveRight()
{
    auto MoveVectorRight = [](FVector OldVector) {
        OldVector.Y += 10.0f;
        return OldVector;
    };

    if (!CheckWillCollision(MoveVectorRight))
    {
        FVector NewLocation = GetActorLocation();
        NewLocation.Y += 10;
        SetActorLocation(NewLocation);

        /*if (MoveLeftRightSoundCue)
        {
            UGameplayStatics::PlaySoundAtLocation(GetWorld(), MoveLeftRightSoundCue, GetActorLocation(), GetActorRotation());
        }*/
    }
}

bool APieza::MoveDown(bool PlaySound)
{
    auto MoveVectorDown = [](FVector OldVector) {
        OldVector.Z -= 10.0f;
        return OldVector;
    };

    if (!CheckWillCollision(MoveVectorDown))
    {
        FVector NewLocation = GetActorLocation();
        NewLocation.Z -= 10;
        SetActorLocation(NewLocation);

        return true;
    }
    else
    {
        return false;
    }
}

void APieza::Dismiss()
{
    Blocks.Empty();
}

bool APieza::CheckWillCollision(std::function<FVector(FVector OldLocation)> ChangeBeforeCheck)
{
    FCollisionQueryParams Params;
    for (ABlock* B : Blocks)
    {
        Params.AddIgnoredActor(B);
    }

    for (ABlock* B : Blocks)
    {
        FVector TempVector = B->GetActorLocation();
        TempVector = ChangeBeforeCheck(TempVector);

        TArray<struct FOverlapResult> OutOverlaps;
        FCollisionShape CollisionShape;
        CollisionShape.SetBox(FVector(4.0f, 4.0f, 4.0f));
        FCollisionResponseParams ResponseParam;
        bool b = GetWorld()->OverlapMultiByChannel(OutOverlaps,
            TempVector, B->GetActorQuat(), ECollisionChannel::ECC_WorldDynamic,
            CollisionShape, Params, ResponseParam);

        if (b)
        {
            for (auto&& Result : OutOverlaps)
            {
                UE_LOG(LogTemp, Warning, TEXT("OverLapped with actor %s, component=%s"), *Result.GetActor()->GetName(),
                    *Result.GetComponent()->GetName());
            }
            return true;
        }
    }

    return false;
}


