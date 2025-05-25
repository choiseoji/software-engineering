#ifndef USER_H
# define USER_H

# include "Bicycle.h"
# include <string>
# include <vector>
using namespace std;

class User {

private:
    string id_;
    string password_;
    bool is_logined_;

public:
    User(const string& id, const string& password);
    
    bool checkIdAndPassword(const string& id, const string& password) const;
    void setLoginStatus();
    bool checkLoginStatus();
    void setLogoutStatus();

    string getUserId();
    string getUserPassword();

    virtual string getMemberPhonenumber() = 0;
    virtual void addRentedBicycle(Bicycle* bicycle) = 0;
    virtual vector<Bicycle*> listRentedBicycle() = 0;
};

#endif