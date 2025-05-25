#ifndef RENT_BICYCLE_H
# define RENT_BICYCLE_H

# include "../entity/RegisteredUser.h"
# include "../entity/RegisteredBicycle.h"

class RentBicycle {

private:

public:
    void rentBicycle(const string& id, RegisteredUser& registeredUser, RegisteredBicycle& registerBicycle);

};

#endif