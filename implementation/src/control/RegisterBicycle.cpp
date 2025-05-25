#include "../../include/control/RegisterBicycle.h"

string RegisterBicycle::registerBicycle(const string& id, const string& name, RegisteredBicycle& registeredBicycle) {

    Bicycle* newBicycle = new Bicycle(id, name);
    registeredBicycle.addNewBicycle(newBicycle);    // RegisteredBicycle에 새로운 유저 추가

    return (newBicycle->getBicycleDetails());
}