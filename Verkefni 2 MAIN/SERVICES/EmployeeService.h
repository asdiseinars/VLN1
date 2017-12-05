#ifndef EMPLOYEESERVICE_H
#define EMPLOYEESERVICE_H
#include "Employee.h"
#include "EmployeeService.h"
#include "EmployeeRepo.h"


class EmployeeService
{
    public:
        EmployeeService();
        void addEmployee(const Employee& employee);


    private:
};

#endif // EMPLOYEESERVICE_H

