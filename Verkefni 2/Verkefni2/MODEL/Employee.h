#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include <iostream>
#include <string>

using namespace std;

class Employee
{
    public:
        Employee();
        Employee(string name, int ssn, double salary, int month, int year);
        string get_name();
        int get_ssn();
        double get_salary();
        int get_month();
        int get_year();
        void set_name(string name);
        void set_ssn(int ssn);
        void set_salary(double salary);
        void set_month(int month);
        void set_year(int year);

    private:
        string name;
        int ssn;
        double salary;
        int month;
        int year;
};

#endif // EMPLOYEE_H
