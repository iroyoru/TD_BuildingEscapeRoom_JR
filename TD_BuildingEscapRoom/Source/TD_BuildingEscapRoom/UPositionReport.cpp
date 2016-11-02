// Fill out your copyright notice in the Description page of Project Settings.

#include "TD_BuildingEscapRoom.h"
#include "UPositionReport.h"


// Sets default values for this component's properties
UUPositionReport::UUPositionReport()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	bWantsBeginPlay = true;
	PrimaryComponentTick.bCanEverTick = true;
	

	// ...
}


// Called when the game starts
void UUPositionReport::BeginPlay()
{
	Super::BeginPlay();

	FString Name = GetOwner()->GetName();
	FString ObjectPosition = GetOwner()->GetTransform().GetLocation().ToString();
	FString ObjectRotation = GetOwner()->GetTransform().GetRotation().ToString();
	FString ObjectScale = GetOwner()->GetTransform().GetScale3D().ToString();
	UE_LOG(LogTemp, Warning, TEXT("%s is at %s, rotation: %s, scale : %s"),*Name,*ObjectPosition,*ObjectRotation,*ObjectScale);

	// ...
	
}


// Called every frame
void UUPositionReport::TickComponent( float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction )
{
	Super::TickComponent( DeltaTime, TickType, ThisTickFunction );

	// ...
}

