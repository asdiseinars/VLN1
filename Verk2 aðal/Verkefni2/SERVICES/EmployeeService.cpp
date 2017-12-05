#include "EmployeeService.h"

EmployeeService::EmployeeService()
{
    //ctor
}

void EmployeeService::addEmployee(const Employee& employee) {
    EmployeeRepo employee_repo;
    employee_repo.add_employee(employee);
    cout << employee << endl;

}
