#include "../../include/entity/MemberRentedBicycleCollection.h"


void MemberRentedBicycleCollection::addRentedBicycle(Bicycle* bicycle) {

    rented_bicycles_.push_back(bicycle);
}

vector<Bicycle*> MemberRentedBicycleCollection::listRentedBicycle() {

    return (rented_bicycles_);
}