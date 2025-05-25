#include "../../include/entity/Member.h"

Member::Member(const std::string& id, const std::string& password) : User(id, password) { }

void Member::addRentedBicycle(Bicycle* bicycle) {

    rented_bicycles_.push_back(bicycle);
}

vector<Bicycle*> Member::listRentedBicycle() {

    return (rented_bicycles_);
}