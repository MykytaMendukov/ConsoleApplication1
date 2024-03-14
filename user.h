#ifndef user_h
#define user_h

#include "validation.h";

class User
{

private:

    string* login;
    string* password;
    string* email;
    string* phone;

public:

    User();
    User(string* login);
    User(string* login, string* password);
    User(string* login, string* password, string* email);
    User(string* login, string* password, string* email, string* phone);

    void setLogin(string* login);
    void setPassword(string* password);
    void setEmail(string* email);
    /*
    void setPhone(string* phone);

    string* getLogin();
    string* getPassword();
    string* getEmail();
    string* getPhone();
    */
};

#endif
