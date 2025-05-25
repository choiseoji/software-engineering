#include "../../include/entity/Admin.h"

Admin::Admin() : User("admin", "admin") {}

string Admin::getMemberPhonenumber() {}

void Admin::addRentedBicycle(Bicycle* bicycle) {}

vector<Bicycle*> Admin::listRentedBicycle() {}