#ifndef MEMBER_RENTED_BICYCLE_COLLECTION_H
# define MEMBER_RENTED_BICYCLE_COLLECTION_H

# include "Bicycle.h"
# include <vector>
using namespace std;

class MemberRentedBicycleCollection {

private:
    vector<Bicycle*> rented_bicycles_;

public:
    void addRentedBicycle(Bicycle* bicycle);
    vector<Bicycle*> listRentedBicycle();
};

#endif