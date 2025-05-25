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
    Member(const std::string& id, const std::string& password);
    
    void addRentedBicycle(Bicycle* bicycle);
    vector<Bicycle*> listRentedBicycle();
    
};

#endif