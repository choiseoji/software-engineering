#include "include/entity/Member.h"

void Member::addRentedBicycle(Bicycle* bicycle) {

    rented_bicycles_.push_back(bicycle);
}

vector<Bicycle*> Member::listRentedBicycle() {

    return (rented_bicycles_);
}