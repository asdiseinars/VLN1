#include <iostream>
#include <fstream>
#include <string>
using namespace std;


int main() {

    string str;
    ifstream fin;
    char answer;

    fin.open("Hurricane.txt");

    do{
        if (fin.is_open()) {
            for(int i = 0; i < 10; i++) {
                getline (fin, str);
                cout << str << endl;

                if(fin.eof()){
                    return 0;
                }
            }
        }

        else {
            cout << "Unable to read from file! " << endl;
        }

        do{
                cout << endl << "Do you want to see the next 10 lines? " << endl;
                cout << "(y = yes)/(n = no): ";
                cin >> answer;
                cout << endl;
        }
        while(answer != 'y' && answer != 'n');

    }
    while(answer == 'y' || answer == 'Y');

    fin.close();

    return 0;
}
