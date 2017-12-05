#include "UserUI.h"

void UserUI::user_menu() {
    cout << "Welcome user, choose your preferred action: " << endl;

    while (true) {
        cout << "1: Add a salary record" << endl;
        cout << "2: Get all salary records for a given SSN" << endl;
        cout << "3: Get a total salary for a given year and a given SSN" << endl;
        cout << "4: Get the name of the employee with the highest total salary for a given year" << endl;

        cout << endl;

        char input;
        cin >> input;

        if (input == '1') {
            cout << "Add salary record" << endl << endl;
            EmployeeService add_employee;
            add_employee.addEmployee(create_employee());
        }

        /*void EmployeeService::addEmployee(const Employee& employee) {
        EmployeeRepo employee_repo;
        employee_repo.add_employee(employee);
        //cout << employee << endl;*/


        else if (input == '2') {
            cout << "Get all salary records for a given SSN" << endl;
        }

        else if (input =='3') {
            cout << "Get a total salary for a given year and a given SSN" << endl;
        }

        else if (input == '4') {
            cout << "Get the name of the employee with the highest total salary for a given year" << endl;
        }

        else {
            cout << "Invalid input" << endl;
        }
    }
}

Employee UserUI::create_employee() {
    string name;
    string ssn;
    double salary;
    int month;
    int year;

    cout << "Name: ";
    cin >> name;
    cout << "SSN: ";
    cin >> ssn;
    cout << "Salary: ";
    cin >> salary;
    cout << "Month: ";
    cin >> month;
    cout << "Year: ";
    cin >> year;
    Employee employee(name, ssn, salary, month, year);

    return employee;
}
