// Fill out your copyright notice in the Description page of Project Settings.
#include "DynamicGeometry.h"

// #include "Components/CapsuleComponent.h"
// #include "Components/InputComponent.h"

// Sets default values
ADynamicGeometry::ADynamicGeometry()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	// GetCapsuleComponent()->InitCapsuleSize(40.0f, 95.0f);

	CellMesh = CreateDefaultSubobject<UStaticMeshComponent>( TEXT("Cell") );
	// CellMesh->SetRelativeLocation(FVector(0.f, 0.f, 0.f));  // change location
	// SphereMesh->SetupAttachment(GetCapsuleComponent());
	SphereMesh = CreateDefaultSubobject<UStaticMeshComponent>( TEXT("Sphere") );
	SphereMesh->SetupAttachment(CellMesh);
	SphereMesh->SetRelativeLocation(FVector(0.f, 0.f, 50.f));  // change location
}

// Called when the game starts or when spawned
void ADynamicGeometry::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ADynamicGeometry::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

