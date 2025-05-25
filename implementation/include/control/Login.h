#ifndef LOGIN_H
# define LOGIN_H

# include "../entity/RegisteredUser.h"
# include <string>
# include <vector>
using namespace std;

class Login {

private:

public:
    pair<string, string> loginUser(const string& id, const string& password, RegisteredUser& registeredUser);

};

#endif