#include "include/entity/RegisteredBicycle.h"

void RegisteredBicycle::addBicycle(Bicycle* bicycle) {

    registered_bicycles_.push_back(bicycle);
}