#ifndef ADMIN_H
# define ADMIN_H

# include "User.h"

class Admin : public User {

private:

public:
    Admin();

    string getMemberPhonenumber();
    void addRentedBicycle(Bicycle* bicycle);
    vector<Bicycle*> listRentedBicycle();
};

#endif