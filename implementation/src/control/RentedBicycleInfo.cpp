#include "../../include/control/RentedBicycleInfo.h"

vector<pair<string, string> > RentedBicycleInfo::viewRentedBicycle(RegisteredUser& registeredUser) {

    vector<User*>& users = registeredUser.listUser();
    vector<pair<string, string> > result;

    for (User* user : users) { 
        
        if (user->checkLoginStatus()) {

            Member* member = dynamic_cast<Member*>(user);
            if (member) {
                vector<Bicycle*> bicycles = member->listRentedBicycle();
                for (Bicycle* b : bicycles) {
    
                    result.push_back(make_pair(b->getBicycleId(), b->getBicycleName()));
                }
            }
        }
    }
    return (result);
}