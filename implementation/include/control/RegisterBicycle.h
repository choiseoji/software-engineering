#ifndef REGISTER_BICYCLE_H
# define REGISTER_BICYCLE_H

# include "../entity/Bicycle.h"
# include "../entity/RegisteredBicycle.h"
# include <string>
using namespace std;

class RegisterBicycle {

private:

public:
    string registerBicycle(const string& id, const string& name, RegisteredBicycle& registeredBicycle);
};

#endif