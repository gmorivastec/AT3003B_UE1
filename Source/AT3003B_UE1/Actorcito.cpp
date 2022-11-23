// Fill out your copyright notice in the Description page of Project Settings.


#include "Actorcito.h"

// archivo .cpp (c plus plus) es el que contiene implementación

// Sets default values
AActorcito::AActorcito()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AActorcito::BeginPlay()
{
	// PARA EL FUTURO:
	// SIEMPRE dejen los supers hasta arriba
	Super::BeginPlay();

	UE_LOG(LogTemp, Display, TEXT("BEGIN PLAY DE ACTOR"));
	
}

// Called every frame
void AActorcito::Tick(float DeltaTime)
{
	// IGUAL QUE ARRIBA!
	Super::Tick(DeltaTime);
	//UE_LOG(LogTemp, Error, TEXT("TICK DE ACTOR"));
}

