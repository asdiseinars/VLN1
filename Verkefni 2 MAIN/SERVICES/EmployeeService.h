#ifndef EMPLOYEESERVICE_H
#define EMPLOYEESERVICE_H
#include "Employee.h"
#include "EmployeeService.h"
#include "EmployeeRepo.h"
#include "InvalidNameException.h"
#include "InvalidSSNException.h"
#include "InvalidSalaryException.h"
#include "InvalidMonthException.h"
#include "InvalidYearException.h"


class EmployeeService
{
    public:
        EmployeeService();
        void add_employee(const Employee& employee);
        bool isValidName(const Employee& employee);
        bool isValidSNN (const Employee& employee);
        bool isValidSalary(const Employee& employee);
        bool isValidMonth (const Employee& employee);
        bool isValidYear (const Employee& employee);
        vector<Employee> getRecordForSsn(string ssn);
        double sumOfSalary(string ssn, int year);

    private:
        EmployeeRepo employee_repo;
};

#endif // EMPLOYEESERVICE_H

