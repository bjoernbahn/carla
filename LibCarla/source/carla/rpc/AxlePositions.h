#pragma once

#include "carla/geom/Vector3D.h"

namespace carla {
  namespace rpc {
    class AxlePositions{
  public:

	  AxlePositions() = default;

	  geom::Vector3D front;
	  geom::Vector3D rear;

	  MSGPACK_DEFINE_ARRAY(front, rear);
	};
  }
}