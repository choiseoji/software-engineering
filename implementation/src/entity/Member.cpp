#include "../../include/entity/Member.h"

Member::Member(const string& id, const string& password, const string& phonenumber) : User(id, password) {

    phonenumber_ = phonenumber;
}

string Member::getMemberPhonenumber() {

    return (phonenumber_);
}

void Member::addRentedBicycle(Bicycle* bicycle) {

    rented_bicycles_.push_back(bicycle);

    // 자전거 id 기준 오름차순 정렬
    sort(rented_bicycles_.begin(), rented_bicycles_.end(),
            [](Bicycle* a, Bicycle* b) {
                return a->getBicycleId() < b->getBicycleId();
            });
}

vector<Bicycle*> Member::listRentedBicycle() {

    return (rented_bicycles_);
}