#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include <iostream>
#include <string>

using namespace std;

class Employee
{
    public:
        Employee();
        Employee(string name, string ssn, double salary, int month, int year);
        string get_name() const ;
        string get_ssn() const ;
        double get_salary() const ;
        int get_month() const ;
        int get_year() const ;
        void set_name(string name);
        void set_ssn(string ssn);
        void set_salary(double salary);
        void set_month(int month);
        void set_year(int year);
        friend ostream& operator << (ostream& out, const Employee& employee);
        friend istream& operator >> (istream& in, Employee& employee);
        bool verbose;
       // double totalSalary;

    private:
        string name;
        string ssn;
        double salary;
        int month;
        int year;

};

#endif

