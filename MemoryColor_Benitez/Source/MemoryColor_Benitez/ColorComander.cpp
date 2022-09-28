// Fill out your copyright notice in the Description page of Project Settings.


#include "ColorComander.h"
#include "Components/TextRenderComponent.h"

// Sets default values
AColorComander::AColorComander()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	DefaultRoot = CreateAbstractDefaultSubobject<USceneComponent>(TEXT("DefaultRoot"));
	RootComponent = DefaultRoot;

	ColorComander = CreateAbstractDefaultSubobject<UStaticMeshComponent>(TEXT("ColorComander"));
	ColorComander->SetupAttachment(DefaultRoot);

	TextRenderColor = CreateAbstractDefaultSubobject<UTextRenderComponent>(TEXT("TextRender_Color"));
	TextRenderColor->SetupAttachment(ColorComander);

	TextRenderNumber = CreateAbstractDefaultSubobject<UTextRenderComponent>(TEXT("TextRender_Number"));
	TextRenderNumber->SetupAttachment(ColorComander);
}

// Called when the game starts or when spawned
void AColorComander::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AColorComander::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AColorComander::CheckColor(FString color)
{
	if (color == ColorsArray[ColorsArrayIndex])
	{
		ColorsArrayIndex++;
		printf("YES");
	}
	else
	{
		printf("LOSER");
	}
}