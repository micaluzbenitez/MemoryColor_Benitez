// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ColorComander.generated.h"

class UTextRenderComponent;

UCLASS()
class MEMORYCOLOR_BENITEZ_API AColorComander : public AActor
{
	GENERATED_BODY()

	UPROPERTY(VisibleDefaultsOnly, Category = ColorComander);
	USceneComponent* DefaultRoot;

public:	
	// Sets default values for this actor's properties
	AColorComander();

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadWrite, Category = ColorComander);
	UStaticMeshComponent* ColorComander;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadWrite, Category = ColorComander);
	UTextRenderComponent* TextRenderColor;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadWrite, Category = ColorComander);
	UTextRenderComponent* TextRenderNumber;

	UPROPERTY(SimpleDisplay, BlueprintReadWrite, Category = ColorComander);
	TArray<FString> ColorsArray;

	UPROPERTY(SimpleDisplay, BlueprintReadWrite, Category = ColorComander);
	int ColorsArrayIndex = 0;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION(BlueprintCallable)
	bool CheckColor(FString color);
};
