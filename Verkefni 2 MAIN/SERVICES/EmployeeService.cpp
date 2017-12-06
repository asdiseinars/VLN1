#include "EmployeeService.h"

EmployeeService::EmployeeService()
{
}

void EmployeeService::add_employee(const Employee& employee) {
    if(isValidName(employee) && isValidSNN(employee)
        && isValidSalary(employee) && isValidMonth(employee)
        && isValidYear(employee)) {

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

    if(ssn.size() != 10){
        throw InvalidSSNException();
    }
    else if(ssn.size() == 10) {
        for(unsigned int i = 0; i < ssn.size(); i++) {
            if(!isdigit(ssn[i])) {
                throw InvalidSSNException();
            }
        }
    }
    return true;
}

bool EmployeeService::isValidSalary(const Employee& employee) {
    double salary = employee.get_salary();

    if (salary < 0) {
        throw InvalidSalaryException();
    }

    return true;

    ///bæta við að tjékka hvort eru bókstafir
}

bool EmployeeService::isValidMonth (const Employee& employee) {
    int month = employee.get_month();

    if (month < 1 || month > 12) {
        throw InvalidMonthException();
    }
    return true;
}

bool EmployeeService::isValidYear (const Employee& employee) {
    int year = employee.get_year();

    if (year != 2017) {
        throw InvalidYearException();
    }
    return true;
}

vector <Employee> EmployeeService::getRecordForSsn(string ssn) {
    EmployeeRepo repo;
    return repo.get_record_for_ssn(ssn);
}

double EmployeeService::sumOfSalary(string ssn, int year) {
    EmployeeRepo repo;
    return repo.sum_of_salary(ssn, year);
}







