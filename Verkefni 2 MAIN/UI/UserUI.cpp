#include "UserUI.h"

void UserUI::user_menu() {

    while (true) {
        menu_text();

        char input;
        cin >> input;

        validate_user_input(input);

        if (input == '1') {
            cout << "Add salary record" << endl;
            cout << "-----------------" << endl;
            validate_user_input(input);
            EmployeeService add_new_employee; //Þetta er vitlaust
            add_new_employee.add_employee(create_employee());
        }

        else if (input == '2') {
            cout << "Get all salary records for a given SSN" << endl;
        }

        else if (input =='3') {
            cout << "Get a total salary for a given year and a given SSN" << endl;
        }

        else if (input == '4') {
            cout << "Get the name of the employee with the highest total salary for a given year" << endl;
        }
        else if (input == '5') {
            exit(0);
        }

        else {
            cout << "Invalid input" << endl;
        }
    }
}

Employee UserUI::create_employee() {
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

void UserUI::validate_user_input(char input) {
    if (input == '1') {
        try {
            employee_services.add_employee(create_employee());
        }
        catch (InvalidNameException) {
            system("cls");
            cout << "Invalid name! " << endl;
            cout << endl;
        }
        catch (InvalidSSNException) {
            system("cls");
            cout << "Invalid SSN! " << endl;
            cout << endl;
        }
    }

    else if (input == '2') {

    }

    else if (input == '3') {

    }

    else if (input == '4') {

    }
}

void UserUI::menu_text() {
    cout << "Welcome user, choose your preferred action: " << endl;
    cout << "1: Add a salary record" << endl;
    cout << "2: Get all salary records for a given SSN" << endl;
    cout << "3: Get a total salary for a given year and a given SSN" << endl;
    cout << "4: Get the name of the employee with the highest total salary for a given year" << endl;
    cout << "5: Exit" << endl;
    cout << endl;
}
