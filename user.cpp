#include "user.h"

User::User() {

    login = nullptr;
    password = nullptr;
    email = nullptr;
    phone = nullptr;

}

User::User(string* login): User() 
{
    setLogin(login);
}

User::User(string* login, string* password): User(login)
{    
    setPassword(password);
}

User::User(string* login, string* password, string* email) : User(login, password) 
{
    setEmail(email);
}

void User::setLogin(string* login) 
{   
    if (login == nullptr) {
        cout << AppError::text_for_login_is_null << endl;
    }
    else {
        trim(*login);
        if (login->size() < 3 && login->empty() != true) {
            cout << AppError::text_for_login << endl;
        }
            else if (login->empty()) {
            cout << AppError::text_for_login_empty << endl;
        }
            else {
            this->login = login;
        }
    }

}
void User::setPassword(string* password)
{
    if (login == nullptr) {
        cout << AppError::text_for_password_is_null << endl;
    }
    else {
        trim(*password);
        if (password->size() < 8){
            cout << AppError::text_for_password << endl;
        }
        else {
            this->password = password;
        }
    }

}
void User::setEmail(string* email)
{
    if (email == nullptr) {
        cout << "Email is null" << endl;
    }
    else{
        this->email = email;
    }
}