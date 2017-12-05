#ifndef USERUI_H
#define USERUI_H
#include "Employee.h"
#include "EmployeeService.h"
#include <iostream>
#include "InvalidNameException.h"

using namespace std;

class UserUI
{
    public:

        void user_menu();
        Employee create_employee();
        void validate_user_input(char input);

    private:
        EmployeeService employee_services;

};

#endif // USERUI_H








