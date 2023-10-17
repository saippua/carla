// Copyright (c) 2017 Computer Vision Center (CVC) at the Universitat Autonoma
// de Barcelona (UAB).
//
// This work is licensed under the terms of the MIT license.
// For a copy, see <https://opensource.org/licenses/MIT>.

#pragma once

//#include "Engine/StaticMesh.h"
#include "GameFramework/Actor.h"
#include "PropParameters.h"

#include "StaticActorParameters.generated.h"

USTRUCT(BlueprintType)
struct CARLA_API FStaticActorParameters
{
  GENERATED_BODY()

  UPROPERTY(EditAnywhere, BlueprintReadWrite)
  FString Name;

  UPROPERTY(EditAnywhere, BlueprintReadWrite)
  TSubclassOf <AActor> Class;

  UPROPERTY(EditAnywhere, BlueprintReadWrite)
  EPropSize Size = EPropSize::INVALID;
};
