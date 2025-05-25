#include "../../include/entity/Bicycle.h"

Bicycle::Bicycle(const string& bicycle_id, const string& bicycle_name) {

    bicycle_id_ = bicycle_id;
    bicycle_name_ = bicycle_name;
    is_rented_ = false;    // 초기 대여 상태 : false
}

Bicycle* Bicycle::setBicycleStatusRented() {
    
    is_rented_ = true;
    return (this);
}

string Bicycle::getBicycleDetails() {

    return (bicycle_id_ + " " + bicycle_name_ + "\n");
}

string Bicycle::getBicycleId() {
    
    return (bicycle_id_);
}

string Bicycle::getBicycleName() {

    return (bicycle_name_);
}