#include "../../include/control/RentedBicycleInfo.h"

vector<string> RentedBicycleInfo::viewRentedBicycle(RegisteredUser& registeredUser) {

    vector<User*>& users = registeredUser.listUser();
    vector<string> result;

    for (User* user : users) { 
        
        if (user->checkLoginStatus()) {

            vector<Bicycle*> bicycles = user->listRentedBicycle();
            for (Bicycle* b : bicycles) {

                result.push_back(b->getBicycleDetails());
            }
        }
    }
    return (result);
}