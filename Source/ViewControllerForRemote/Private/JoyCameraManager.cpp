// Fill out your copyright notice in the Description page of Project Settings.


#include "JoyCameraManager.h"
#include "Engine.h"
#include "Kismet/KismetSystemLibrary.h"
#include "Blueprint/WidgetLayoutLibrary.h"
#include "Kismet/GameplayStatics.h"
#include "GameFramework/Character.h"
#include "Blueprint/UserWidget.h"

// Sets default values
AJoyCameraManager::AJoyCameraManager()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	isUseJoyCamera = true;

	// If true, Print screen some value to debug;
	isDebugMode = true;

	// If true, Show Operation UI;
	isShowUI = true;

	AcceptableRange = 120;

	AngleTurnrate = 0.2f;

}

// Called when the game starts or when spawned
void AJoyCameraManager::BeginPlay()
{
	Super::BeginPlay();

	PlayerController = UGameplayStatics::GetPlayerController(this, 0);
	
	CenterPos = GetCenterPos();
}

// Called every frame
void AJoyCameraManager::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);


	PlayerPawn = UGameplayStatics::GetPlayerPawn(this, 0);

	CursorPos = GetCursorPos();

	// If cursor vec lengh is longer than Acceptable Range, return true
	isOutOfRange = CulCursorVec();

	// Change Angle if Cursor 
	if (isOutOfRange == true && isUseJoyCamera == true)
	{
		ChangeAngle();
	}

	if (isDebugMode == true)
	{
		DebugParams();
	}


}

FVector2D AJoyCameraManager::GetCenterPos()
{
	FVector2D ViewportSize = UWidgetLayoutLibrary::GetViewportSize(PlayerController);

	if (ViewportSize.Size() == 0)
	{
		return FVector2D(960, 540);
	}

	return ViewportSize / 2;
}

FVector2D AJoyCameraManager::GetCursorPos()
{
	return UWidgetLayoutLibrary::GetMousePositionOnViewport(PlayerController);
}

void AJoyCameraManager::DebugParams()
{
	UKismetSystemLibrary::PrintString(this, isOutOfRange ? TEXT("true") : TEXT("false"), true, true, FColor::Red, 0);
	UKismetSystemLibrary::PrintString(this, "CursorPos:", true, true, FColor::Red, 0);

	UKismetSystemLibrary::PrintString(this, FString::SanitizeFloat(VectorLen), true, true, FColor::Red, 0);
	UKismetSystemLibrary::PrintString(this, "CursorLengh:", true, true, FColor::Red, 0);

	UKismetSystemLibrary::PrintString(this, CursorPos.ToString() , true, true, FColor::Red, 0);
	UKismetSystemLibrary::PrintString(this, "CursorPos:", true, true, FColor::Red, 0);

	UKismetSystemLibrary::PrintString(this, CenterPos.ToString(), true, true, FColor::Red, 0);
	UKismetSystemLibrary::PrintString(this, "CenterPos:", true, true, FColor::Red, 0);
}

bool AJoyCameraManager::CulCursorVec()
{
	CursorVec = CursorPos - CenterPos;
	VectorLen = CursorVec.Size();

	if (VectorLen >= AcceptableRange)
	{
		return true;
	}
	return false;
}

void AJoyCameraManager::ChangeAngle()
{
	float YChangeAmount = CursorVec.Y * AngleTurnrate * GetWorld()->GetDeltaSeconds();
	float XChangeAmount = CursorVec.X * AngleTurnrate * GetWorld()->GetDeltaSeconds();

	PlayerPawn->AddControllerPitchInput(YChangeAmount);
	PlayerPawn->AddControllerYawInput(XChangeAmount);
}

void AJoyCameraManager::CreateAndAddUI()
{

	// Old version spawning UI
	/*
  	FString CursorUIPath = "/ViewControllerForRemote/UI/W_Cursor.W_Cursor_C";
  	CursorUIClass = TSoftClassPtr<UUserWidget>(FSoftObjectPath(*CursorUIPath)).LoadSynchronous();

	if (CursorUIClass != nullptr)
	{
		UKismetSystemLibrary::PrintString(this, "Asset found", true, true, FColor::Blue, 10);
		
		CursorUIInstance = Cast<UUserWidget>(CreateWidget(GetWorld(), CursorUIClass));

		UKismetSystemLibrary::PrintString(this, (CursorUIInstance != nullptr) ? CursorUIInstance->GetName() : FString(TEXT("nullptr")), true, true, FColor::Purple, 10);

		if (CursorUIInstance)
		{
			UKismetSystemLibrary::PrintString(this, "Instance found", true, true, FColor::Purple, 10);
			// CursorUIInstance->AddToViewport(0);
		}
 	}
	*/
}