#include "../../include/entity/RegisteredBicycle.h"

void RegisteredBicycle::addNewBicycle(Bicycle* bicycle) {

    registered_bicycles_.push_back(bicycle);
}

Bicycle* RegisteredBicycle::findBicycleById(const string& id) {

    for(Bicycle* bicycle : registered_bicycles_) {

        if (bicycle->getBicycleId() == id) {
            return (bicycle);
        }
    }
}