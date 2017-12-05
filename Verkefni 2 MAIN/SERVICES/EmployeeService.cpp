#include "EmployeeService.h"

EmployeeService::EmployeeService()
{
}

void EmployeeService::add_employee(const Employee& employee) {
    if(isValidName(employee)) {
        employee_repo.store_employee(employee);
    }
}

bool EmployeeService::isValidName(const Employee& employee) {
    string name = employee.get_name();

    for(unsigned int i = 0; i < name.size(); i++) {
        if(!isalpha(name[i])) {
           throw InvalidNameException();
        }
    }

    return true;
}


bool EmployeeService::isValidSNN(const Employee& employee) {
    string ssn = employee.get_ssn();

    if(ssn.length() != 10){
        throw InvalidSSNException();
    }
    else if(ssn.length() == 10) {
        for(unsigned int i = 0; i < ssn.size(); i++) {
            if(isalpha(ssn[i])) {
                throw InvalidSSNException();
            }
        }
    }

    return true;
}


