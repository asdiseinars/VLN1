#include "UserService.h"

UserService::UserService() {
    //ctor
}

void UserService::init() {
    user_menu();
    char selection;
    cin >> selection;

    if (selection == '1' ){
        cout << "hallo" << endl;
    }

    else if (selection == '2') {
        cout << "hallo 2" << endl;
    }

}
