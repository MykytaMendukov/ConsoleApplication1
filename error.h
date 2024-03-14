#ifndef app_error_h
#define app_error_h

#include "library.h"

class AppError
{
public:
    static const string text_for_login;
    static const string text_for_login_is_null;
    static const string text_for_login_empty;

    static const string text_for_password;
    static const string text_for_password_is_null;

};

#endif