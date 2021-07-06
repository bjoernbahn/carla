#pragma once

#include "carla/MsgPack.h"

#include <cstdint>

namespace carla {
namespace rpc {

// Similar to TrafficLightState, but describing bulb color instead of state
enum class TrafficLightColor : uint8_t
{
  Red,
  Yellow,
  Green,
  // Other values currently unused by CARLA, but supported by OSI
  Blue,
  White,
  Other
};

} // namespace rpc
} // namespace carla

MSGPACK_ADD_ENUM(carla::rpc::TrafficLightColor);