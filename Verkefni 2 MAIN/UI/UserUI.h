#ifndef USERUI_H
#define USERUI_H
#include <iostream>
#include <stdlib.h>
#include "Employee.h"
#include "EmployeeService.h"
#include "InvalidNameException.h"
#include "InvalidSSNException.h"

using namespace std;

class UserUI
{
    public:
        void user_menu();
        Employee create_employee();
        void validate_user_input(char input);
        void menu_text();

    private:
        EmployeeService employee_services;
        string name;
        string ssn;
        double salary;
        int month;
        int year;

};

#endif // USERUI_H








