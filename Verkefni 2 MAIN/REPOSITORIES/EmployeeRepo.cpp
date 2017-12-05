#include "EmployeeRepo.h"

EmployeeRepo::EmployeeRepo()
{
    //ctor
}

void EmployeeRepo::add_employee(const Employee& employee) {

    ofstream fout;

    fout.open("employees.txt, ios::app");
    if (fout.is_open()) {
        fout << employee;
        fout.close();
    }

    else {
        ///throw error
    }

}
