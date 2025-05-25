#include "../../include/control/RentBicycle.h"

string RentBicycle::rentBicycle(const string& id, RegisteredUser& registeredUser, RegisteredBicycle& registerBicycle) {

    vector<User*>& users = registeredUser.listUser();

    for (User* user : users) { 

        if (user->checkLoginStatus()) {
            
            Bicycle* bicycle = registerBicycle.findBicycleById(id);
            user->addRentedBicycle(bicycle);

            return (bicycle->getBicycleDetails());
        }
    }
}