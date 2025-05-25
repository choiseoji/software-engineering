#ifndef MEMBER_H
# define MEMBER_H

# include "User.h"
# include "Bicycle.h"
# include <vector>
using namespace std;

class Member : public User {

private:
    string phonenumber_;
    vector<Bicycle*> rented_bicycles_;

public:
    Member(const string& id, const string& password, const string& phonenumber);
    
    string getMemberPhonenumber();
    void addRentedBicycle(Bicycle* bicycle);
    vector<Bicycle*> listRentedBicycle();
    
};

#endif