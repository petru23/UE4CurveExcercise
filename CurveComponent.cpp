// Fill out your copyright notice in the Description page of Project Settings.

#include "CurveComponent.h"


// Sets default values for this component's properties
UCurveComponent::UCurveComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UCurveComponent::BeginPlay()
{
	Super::BeginPlay();

	ElapsedTime = 0;
	float min;
	CurveVector->GetTimeRange(min, CurveMaxTime);

	// ...

}


// Called every frame
void UCurveComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	ElapsedTime += DeltaTime * Speed;
	if (ElapsedTime > CurveMaxTime)
	{
		ElapsedTime -= CurveMaxTime;
	}

	FVector position = CurveVector->GetVectorValue(ElapsedTime);

	AActor* actor = GetOwner();
	//non utilizzare il teletrasporto quindi se ha qualcosa in mezzo fermati
	actor->SetActorLocation(position, false);
		// ...
}

