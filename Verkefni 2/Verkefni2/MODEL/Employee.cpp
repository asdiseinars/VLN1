#include "Employee.h"

Employee::Employee()
{
    //ctor
}

 Employee::Employee(string name, int ssn, double salary, int month, int year) {
    this->name = name;
    this->ssn = ssn;
    this->salary = salary;
    this->month = month;
    this->year = year;
 }

string Employee::get_name() {
    return name;
}

int Employee::get_ssn() {
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

void Employee::set_ssn(int ssn) {
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
