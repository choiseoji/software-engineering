#ifndef RENTED_BICYCLE_INFO_H
# define RENTED_BICYCLE_INFO_H

# include "../entity/RegisteredUser.h"
# include <string>
using namespace std;

class RentedBicycleInfo {

private:

public:
    vector<pair<string, string>> viewRentedBicycle(RegisteredUser& registeredUser);
};

#endif