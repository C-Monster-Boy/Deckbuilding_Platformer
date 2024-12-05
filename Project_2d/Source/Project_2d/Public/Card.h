// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Card.generated.h"

UENUM(BlueprintType)
enum ECardKind {
	Substance UMETA(DisplayName = "Substance"),
	Void UMETA(DisplayName = "Void"),
	Creation UMETA(DisplayName = "Creation")
};

UENUM(BlueprintType)
enum ECardType {
	Weapon UMETA(DisplayName = "Weapon"),
	Spell UMETA(DisplayName = "Spell"),
	Status_Effect UMETA(DisplayName = "Effect")
};


UCLASS()
class PROJECT_2D_API ACard : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ACard();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
