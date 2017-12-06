#ifndef EMPLOYEEREPO_H
#define EMPLOYEEREPO_H
#include "Employee.h"
#include "EmployeeRepo.h"
#include "Employee.h"
#include <fstream>
#include <vector>
#include <algorithm>

class EmployeeRepo
{
    public:
        EmployeeRepo();
        void store_employee(const Employee& employee);
        vector<Employee> get_record_for_ssn (string ssn);
        vector<Employee> employees;
        double sum_of_salary(string ssn, int year);
        string getHeighestPaidEmloyee(int year);

    private:
        bool verbose;
};

#endif // EMPLOYEEREPO_H
