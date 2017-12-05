#ifndef EMPLOYEESERVICE_H
#define EMPLOYEESERVICE_H
#include "Employee.h"
#include "EmployeeService.h"
#include "EmployeeRepo.h"
#include "InvalidNameException.h"
#include "InvalidSSNException.h"


class EmployeeService
{
    public:
        EmployeeService();
        void add_employee(const Employee& employee);
        bool isValidName(const Employee& employee);
        bool isValidSNN (const Employee& employee);

    private:
        EmployeeRepo employee_repo;
};

#endif // EMPLOYEESERVICE_H

