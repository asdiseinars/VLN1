#include <iostream>
#include "UserUI.h"
<<<<<<< HEAD

#include "UserService.h"

=======
#include "UserService.h"
>>>>>>> 271eb2846ca0362b40080363d6f4034449da1f77

using namespace std;

int main()
{

    UserUI ui;
    ui.user_menu();

    UserService user;
    user.init();
<<<<<<< HEAD

=======
>>>>>>> 271eb2846ca0362b40080363d6f4034449da1f77

    return 0;
}
