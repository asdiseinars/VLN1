#include "Employee.h"

Employee::Employee()
{
    //ctor
}

Employee::Employee(string name, string ssn, double salary, int month, int year) {
    this->name = name;
    this->ssn = ssn;
    this->salary = salary;
    this->month = month;
    this->year = year;
}

string Employee::get_name() const {
    return name;
}

string Employee::get_ssn() const {
    return ssn;
}

double Employee::get_salary() const {
    return salary;
}

int Employee::get_month() const {
    return month;
}

int Employee::get_year() const {
    return year;
}

void Employee::set_name(string name) {
    this->name = name;
}

void Employee::set_ssn(string ssn) {
    this->ssn = ssn;
}

void Employee::set_salary(float salary) {
    this->salary = salary;
}

void Employee::set_month(int month) {
    this->month = month;
}

void Employee::set_year(int year) {
    this->year = year;
}

ostream& operator << (ostream& out, const Employee& employee) {

    out << employee.name << endl;
    out << employee.ssn << endl;
    out << employee.salary << endl;
    out << employee.month << endl;
    out << employee.year << endl;

    return out;
}

istream& operator >> (istream& in, Employee& employee) {
    if (employee.verbose) {
            cout << "Name: ";
    }
    in >> employee.name;
    if (employee.verbose) {
            cout << "SSN: ";
    }
    in >> employee.ssn;
    if (employee.verbose) {
            cout << "Salary: ";
    }
    in >> employee.salary;
    if (employee.verbose) {
            cout << "Month: ";
    }
    in >> employee.month;
    if (employee.verbose) {
            cout << "Year: ";
    }
    in >> employee.year;

    return in;
}
