#include "../../include/control/RentBicycle.h"

void RentBicycle::rentBicycle(const string& id, RegisteredUser& registeredUser, RegisteredBicycle& registerBicycle) {

    vector<User*>& users = registeredUser.listUser();

    for (User* user : users) { 

        if (user->checkLoginStatus()) {
            
            user->addRentedBicycle(registerBicycle.findBicycleById(id));
        }
    }
}