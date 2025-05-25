#ifndef LOGOUT_H
# define LOGOUT_H

# include "../entity/RegisteredUser.h"

class Logout {

private:

public:
    string logoutUser(RegisteredUser& registeredUser);
};

#endif