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

string Employee::get_name() {
    return name;
}

string Employee::get_ssn() {
    return ssn;
}

double Employee::get_salary() {
    return salary;
}

int Employee::get_month() {
    return month;
}

int Employee::get_year() {
    return year;
}

void Employee::set_name(string name) {

}

void Employee::set_ssn(string ssn) {
    this->ssn = ssn;
}

void Employee::set_salary(double salary) {
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

istream& operator >> (istream& in,Employee& employee) {
    cout << "Name: ";
    in >> employee.name;
    cout << "SSN: ";
    in >> employee.ssn;
    cout << "Salary: ";
    in >> employee.salary;
    cout << "Month: ";
    in >> employee.month;
    cout << "Year: ";
    in >> employee.year;

    return in;






}










