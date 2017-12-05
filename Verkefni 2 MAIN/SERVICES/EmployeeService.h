#ifndef EMPLOYEESERVICE_H
#define EMPLOYEESERVICE_H
#include "Employee.h"
#include "EmployeeService.h"
#include "EmployeeRepo.h"
#include "InvalidNameException.h"


class EmployeeService
{
    public:
        EmployeeService();
        void addEmployee(const Employee& employee);
        bool isValidName(const Employee& employee);

    private:
        EmployeeRepo employee_repo;
};

#endif // EMPLOYEESERVICE_H

