#include "user.h"

User::User() {

    login = nullptr;
    password = nullptr;
    email = nullptr;
    phone = nullptr;

}

User::User(string* login): User() {

    this->login = login;

}

User::User(string* login, string* password): User(login) {
    
    this->password = password;

}