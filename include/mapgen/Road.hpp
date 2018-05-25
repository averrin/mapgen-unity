#ifndef ROAD_H_
#define ROAD_H_

#include "Region.hpp"
#include "micropather.h"

class Road {
public:
  Road();
  Road(micropather::MPVector<void *>* path, float c);
  std::vector<Region *> regions;
  float cost;
  bool seaPath = false;
};

#endif
