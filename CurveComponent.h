// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Runtime/Engine/Classes/Curves/CurveBase.h"
#include "Runtime/Engine/Classes/Curves/CurveVector.h"
#include "CurveComponent.generated.h"


UCLASS(ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class EXCERCISE_TASK1_2_API UCurveComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	// Sets default values for this component's properties
	UCurveComponent();

	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;
	UPROPERTY(EditAnywhere)
		UCurveVector* CurveVector;
	UPROPERTY(EditAnywhere)
		float Speed;

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

private:
	float ElapsedTime;
	float CurveMaxTime;
};
