#ifndef LOGIN_H
# define LOGIN_H

# include "../entity/RegisteredUser.h"
# include <string>
# include <vector>
using namespace std;

class Login {

private:

public:
    bool loginUser(const string& id, const string& password, RegisteredUser& registeredUser);

};

#endif