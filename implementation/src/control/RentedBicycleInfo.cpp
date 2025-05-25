#include "../../include/control/RentedBicycleInfo.h"

vector<pair<string, string>> RentedBicycleInfo::viewRentedBicycle(RegisteredUser& registeredUser) {

    vector<User*>& users = registeredUser.listUser();
    vector<pair<string, string>> result;

    for (User* user : users) { 
        
        if (user->checkLoginStatus()) {

            vector<Bicycle*> bicycles = user->listRentedBicycle();
            for (Bicycle* b : bicycles) {

                result.push_back({b->getBicycleId(), b->getBicycleName()});
            }
        }
    }
    return (result);
}