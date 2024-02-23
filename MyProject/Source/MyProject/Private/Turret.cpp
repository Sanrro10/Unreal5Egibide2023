// Fill out your copyright notice in the Description page of Project Settings.


#include "Turret.h"

#include "K2Node_SpawnActorFromClass.h"

// Sets default values
ATurret::ATurret()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	TurretMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("TurretMesh"));
	TurretMesh->SetupAttachment(RootComponent);

	TurretCollision = CreateDefaultSubobject<USphereComponent>(TEXT("TurretCollision"));
	TurretCollision->SetSphereRadius(400.0f);
	TurretCollision->SetupAttachment(TurretMesh);

	Shooting_Point = CreateDefaultSubobject<USceneComponent>(TEXT("Shooting Point"));
	Shooting_Point->SetupAttachment(TurretMesh);
	
}

// Called when the game starts or when spawned
void ATurret::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ATurret::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ATurret::Shoot()
{
	// Spawn projectile
	FActorSpawnParameters SpawnParams;
	SpawnParams.Owner = this;
	SpawnParams.Instigator = nullptr;
	
}

