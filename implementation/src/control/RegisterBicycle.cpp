#include "../../include/control/RegisterBicycle.h"

pair<string, string> RegisterBicycle::registerBicycle(const string& id, const string& name, RegisteredBicycle& registeredBicycle) {

    Bicycle* newBicycle = new Bicycle(id, name);
    registeredBicycle.addNewBicycle(newBicycle);    // RegisteredBicycle에 새로운 자전거 추가

    return {newBicycle->getBicycleId(), newBicycle->getBicycleName()};
}