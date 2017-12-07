#include "EmployeeRepo.h"

EmployeeRepo::EmployeeRepo()
{
    verbose = false;
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

vector<Employee> EmployeeRepo::get_record_for_ssn(string ssn) {

    vector<Employee> employees;
    Employee emplo;
    emplo.verbose = false;

    ifstream fin;
    fin.open("employees.txt");

    while(!fin.eof()) {
        fin >> emplo;
        employees.push_back(emplo);
    }

    vector<Employee> employees_ssn;

    for(unsigned int i = 0; i < employees.size(); i++) {
        if(ssn == employees[i].get_ssn()){
            employees_ssn.push_back(employees[i]);
            employees.pop_back();
        }
    }

    return employees_ssn;
}

double EmployeeRepo::sum_of_salary(string ssn, int year) {

    vector<Employee> employees;
    Employee emplo;
    emplo.verbose = false;

    ifstream fin;
    fin.open("employees.txt");

    while(!fin.eof()) {
        fin >> emplo;
        employees.push_back(emplo);

    }
    vector<Employee> employees_ssn;

    double sum = 0;

    for(unsigned int i = 0; i < employees.size(); i++) {
        if(ssn == employees[i].get_ssn()){
            employees_ssn.push_back(employees[i]);
            employees.pop_back();
        }
    }

    for (unsigned int i = 0; i < employees_ssn.size(); i++) {
        sum += employees_ssn[i].get_salary();
    }

    return sum;
}
/*
string EmployeeRepo::getHeighestPaidEmloyee(int year) {

    Employee resultEmployee;
    vector<Employee> allEmployees;
    Employee emplo;

    emplo.verbose = false;

    ifstream fin;
    fin.open("employees.txt");

    while(!fin.eof()) {
        fin >> emplo;
        allEmployees.push_back(emplo);
    }

    vector<string>::iterator it;
    vector<Employee> tempEmployess;

    for(unsigned int i = 0; i < allEmployees.size(); i++) {

            vector<Employee>::const_iterator it = tempEmployess.begin();
            vector<Employee>::const_iterator it_end = tempEmployess.end();

        for(int i = 0, it, it_end; i < 10; ++it, i++){
            if(it == it_end) {
                Employee e = allEmployees[i];
                e.totalSalary = allEmployees[i].get_salary();
                tempEmployess.push_back(e);
            }
            else{
                Employee e = allEmployees.at(i);
                if(e.get_ssn() == allEmployees[i].get_ssn());
                e.totalSalary += allEmployees[i].get_salary();
                break;
            }
        }
    }
    return resultEmployee.get_name();

}
*/







