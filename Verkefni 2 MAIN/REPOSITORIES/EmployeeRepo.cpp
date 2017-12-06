#include "EmployeeRepo.h"

EmployeeRepo::EmployeeRepo()
{
    //ctor
}

void EmployeeRepo::store_employee(const Employee& employee) {

    ofstream fout;

    fout.open("employees.txt", ios::app);
    if (fout.is_open()) {
        fout << employee;
        fout.close();
    }

    else {
        ///throw error
    }
}

void EmployeeRepo::get_record_for_ssn (string ssn) {
    set_ssn(ssn);
    ifstream fin;

    fin.open("employees.txt");
    if (fin.is_open()) {
        while (fin >> employee) {

        }

    }

}
