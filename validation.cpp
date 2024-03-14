#include "validation.h"

string* Validation::validateLogin(string* login)
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
            return login;
        }
    }
}