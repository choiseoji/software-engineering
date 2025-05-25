#include "../../include/control/RegisterBicycle.h"

void RegisterBicycle::registerBicycle(const string& id, const string& name, RegisteredBicycle& registeredBicycle) {

    Bicycle* newBicycle = new Bicycle(id, name);
    registeredBicycle.addNewBicycle(newBicycle);    // RegisteredBicycle에 새로운 자전거 추가
}