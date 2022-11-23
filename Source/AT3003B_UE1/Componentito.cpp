// Fill out your copyright notice in the Description page of Project Settings.


#include "Componentito.h"

// Sets default values for this component's properties
UComponentito::UComponentito()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UComponentito::BeginPlay()
{
	Super::BeginPlay();

	UE_LOG(LogTemp, Warning, TEXT("BEGIN PLAY DE COMPONENTE"));

	// ...
	
}


// Called every frame
void UComponentito::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	UE_LOG(LogTemp, Warning, TEXT("TICK DE COMPONENTE"));

	// ...
}

