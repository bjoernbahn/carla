// Copyright (c) 2017 Computer Vision Center (CVC) at the Universitat Autonoma
// de Barcelona (UAB).
//
// This work is licensed under the terms of the MIT license.
// For a copy, see <https://opensource.org/licenses/MIT>.

#pragma once

#include "CoreMinimal.h"

//vehicle types as documented in https://opensimulationinterface.github.io/open-simulation-interface/structosi3_1_1MovingObject_1_1VehicleClassification.html

UENUM(BlueprintType)
enum class EOSIVehicleType : uint8
{
	//Type of vehicle is unknown(must not be used in ground truth).
	TYPE_UNKNOWN UMETA(DisplayName="Unknown"),

	//Other(unspecified but known) type of vehicle.
	TYPE_OTHER UMETA(DisplayName = "Other"),

	//Vehicle is a small car.
	//Definition: Hatchback car with maximum length 4 m.
	TYPE_SMALL_CAR  UMETA(DisplayName = "Small Car"),


	//Vehicle is a compact car.
	//Definition : Hatchback car with length between 4 and 4.5 m.
	TYPE_COMPACT_CAR UMETA(DisplayName = "Compact Car"),


	//Vehicle is a medium car.
	//Definition : Hatchback or sedan with lenght between 4.5 and 5 m.
	TYPE_MEDIUM_CAR UMETA(DisplayName = "Medium Car"),


	//Vehicle is a luxury car.
	//Definition : Sedan or coupe that is longer then 5 m.
	TYPE_LUXURY_CAR UMETA(DisplayName = "Luxury Car"),


	//Vehicle is a delivery van.
	//Definition : A delivery van.
	TYPE_DELIVERY_VAN UMETA(DisplayName = "Delivery Van"),


	//Vehicle is a heavy truck.
	TYPE_HEAVY_TRUCK UMETA(DisplayName = "Heavy Truck"),

	//Vehicle is a truck with semitrailer.
	TYPE_SEMITRAILER UMETA(DisplayName = "Semitrailer"),

	//Vehicle is a trailer(possibly attached to another vehicle).
	TYPE_TRAILER UMETA(DisplayName = "Trailer"),

	//Vehicle is a motorbike or moped.
	TYPE_MOTORBIKE UMETA(DisplayName = "Motorbike/Moped"),

	//Vehicle is a bicycle(without motor and specific lights).
	TYPE_BICYCLE UMETA(DisplayName = "Bicycle"),

	//Vehicle is a bus.
	TYPE_BUS UMETA(DisplayName = "Bus"),

	//Vehicle is a tram.
	TYPE_TRAM UMETA(DisplayName = "Tram"),

	//Vehicle is a train.
	TYPE_TRAIN UMETA(DisplayName = "Train"),

	//Vehicle is a wheelchair.
	TYPE_WHEELCHAIR UMETA(DisplayName = "Wheelchair")

};
