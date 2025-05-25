#ifndef SIGNUP_H
# define SIGNUP_H

# include "../entity/Member.h"
# include "../entity/RegisteredUser.h"
# include <string>
using namespace std;

class Signup {

private:

public:
    string signupUser(const string& id, const string& password, const string& phonenumber, RegisteredUser& registeredUser);

};

#endif