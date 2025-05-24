#ifndef USER_H
# define USER_H

# include <string>
using namespace std;

class User {

private:
    string id_;
    string password_;
    bool is_logined_;

public:
    User(const string& id, const string& password);
    
    bool checkIdAndPassword(const string& id, const string& password);
    void setLoginStatus();
    bool checkLoginStatus();
    void setLogoutStatus();
};

#endif