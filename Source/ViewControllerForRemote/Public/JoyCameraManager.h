// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "JoyCameraManager.generated.h"

class APawn;
class APlayerController;
class UUserWidget;

UCLASS()
class VIEWCONTROLLERFORREMOTE_API AJoyCameraManager : public AActor
{
	GENERATED_BODY()

public:
	// Properties

	UPROPERTY(BlueprintReadWrite, Category = "JoyCamera")
	bool isUseJoyCamera;

	UPROPERTY(BlueprintReadWrite, Category = "JoyCamera")
	bool isDebugMode;

	UPROPERTY(BlueprintReadWrite, Category = "JoyCamera")
	bool isShowUI;

	UPROPERTY(BlueprintReadWrite, Category = "JoyCamera")
	float AcceptableRange;

	UPROPERTY(BlueprintReadWrite, Category = "JoyCamera")
	float AngleTurnrate;

	APawn* PlayerPawn;

	APlayerController* PlayerController;

	UPROPERTY(BlueprintReadOnly, Category = "JoyCamera")
	FVector2D CenterPos;

	UPROPERTY(BlueprintReadOnly, Category = "JoyCamera")
	FVector2D CursorPos;

	FVector2D CursorVec;

	float VectorLen;

	bool isOutOfRange;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "UI");
	TSubclassOf<UUserWidget> CursorUIClass;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "UI");
	TSubclassOf<UUserWidget> CircleUIClass;

	UPROPERTY(BlueprintReadWrite, Category = "UI");
	UUserWidget* CursorUIInstance;

	UPROPERTY(BlueprintReadWrite, Category = "UI");
	UUserWidget* CircleUIInstance;

public:	
	// Sets default values for this actor's properties
	AJoyCameraManager();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

private:
	FVector2D GetCenterPos();

	FVector2D GetCursorPos();

	void DebugParams();

	bool CulCursorVec();

	void ChangeAngle();

	void CreateAndAddUI();
};
