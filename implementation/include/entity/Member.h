#ifndef MEMBER_H
# define MEMBER_H

# include "User.h"
# include "Bicycle.h"
# include <vector>
using namespace std;

class Member : public User {

private:
    vector<Bicycle*> rented_bicycles_;

public:
    void addRentedBicycle(Bicycle* bicycle);
    vector<Bicycle*> listRentedBicycle();
    
};

#endif