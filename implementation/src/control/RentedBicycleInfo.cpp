#include "../../include/control/RentedBicycleInfo.h"

string RentedBicycleInfo::viewRentedBicycle(RegisteredUser& registeredUser) {

    string result = "";
    vector<User*>& users = registeredUser.listUser();

    for (User* user : users) { 
        
        if (user->checkLoginStatus()) {

            vector<Bicycle*> bicycles = user->listRentedBicycle();
            for (Bicycle* b : bicycles) {
                result += b->getBicycleDetails();
            }
        }
    }
    return (result);
}