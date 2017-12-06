#ifndef EMPLOYEEREPO_H
#define EMPLOYEEREPO_H
#include "Employee.h"
#include "EmployeeRepo.h"
#include "Employee.h"
#include <fstream>

class EmployeeRepo
{
    public:
        EmployeeRepo();
        void store_employee(const Employee& employee);
        void get_record_for_ssn (string ssn);

    private:
};

#endif // EMPLOYEEREPO_H
