#pragma once

#include "carla/Debug.h"
#include "carla/geom/BoundingBox.h"
#include "carla/geom/Transform.h"
#include "carla/rpc/ActorId.h"
#include "carla/rpc/TrafficLightColor.h"

#include <string>

namespace carla {
namespace rpc {

  // A traffic light bulb as part of a traffic light head 
  class TrafficLightHead {
  public:
	TrafficLightHead() = default;

	// holds bounds and relative transform (position, rotation)
	geom::BoundingBox bbox;

	TrafficLightColor color;


    MSGPACK_DEFINE_ARRAY(color, bbox);

  };

  // A traffic light head consisting of however many bulbs
  class TrafficLightHeads {
  public:

    TrafficLightHeads() = default;

    // general offset from the traffic light actors origin, common for all traffic lights
    geom::Transform position;

	std::vector<TrafficLightHead> lights;

    MSGPACK_DEFINE_ARRAY(position, lights);
  };

} // namespace rpc
} // namespace carla