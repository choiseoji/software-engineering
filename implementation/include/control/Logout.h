#ifndef LOGOUT_H
# define LOGOUT_H

# include "../entity/RegisteredUser.h"

class Logout {

private:

public:
    void logoutUser(RegisteredUser& registeredUser);
};

#endif