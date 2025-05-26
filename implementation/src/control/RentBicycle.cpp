#include "../../include/control/RentBicycle.h"

pair<string, string> RentBicycle::rentBicycle(const string& id, RegisteredUser& registeredUser, RegisteredBicycle& registerBicycle) {

    vector<User*>& users = registeredUser.listUser();

    for (User* user : users) { 

        if (user->checkLoginStatus()) {

            Member* member = dynamic_cast<Member*>(user);
            if (member) {
                
                Bicycle* bicycle = registerBicycle.findBicycleById(id);
                member->addRentedBicycle(bicycle);
                return make_pair(bicycle->getBicycleId(), bicycle->getBicycleName());
            }
        }
    }
    return make_pair("", "");
}