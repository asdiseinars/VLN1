#include <iostream>
#include "UserUI.h"

#include "UserService.h"


using namespace std;

int main()
{

    UserUI ui;
    ui.user_menu();

    UserService user;
    user.init();


    return 0;
}
