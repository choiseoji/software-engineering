#include "../../include/entity/Member.h"

Member::Member(const string& id, const string& password, const string& phonenumber) : User(id, password) {

    phonenumber_ = phonenumber;
}

string Member::getMemberPhonenumber() {

    return (phonenumber_);
}

void Member::addRentedBicycle(Bicycle* bicycle) {

    rented_bicycle_collection_.addRentedBicycle(bicycle);
}

vector<Bicycle*> Member::listRentedBicycle() {

    return (rented_bicycle_collection_.listRentedBicycle());
}